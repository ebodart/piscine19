#include <unistd.h>

int		tab(char **argv, int tab[6][6]);
void	create_hints(int arr[6][6]);
void	create_hints2(int arr[6][6]);
void	print(int test[6][6]);
int		*find_empty(int arr[6][6]);
int		check(int arr[6][6], int y, int x, int num);
int		solve(int arr[6][6]);
int		check_pov_col_up(int arr[6][6], int y, int x);
int		check_pov_col_down(int arr[6][6], int y, int x);
int		check_pov_line_left(int arr[6][6], int y, int x);
int		check_pov_line_right(int arr[6][6], int y, int x);

/*int		main(int argc, char **argv)
{
	int test[6][6]= {};

	tab(argv, test);
	create_hints(test);
	create_hints2(test);
	solve(test);
	print(test);
}*/

int		tab(char **argv, int tab[6][6])
{
	int		i;
	int		x;
	int		y;
	char	*str;

	str = argv[1];
	x = 1;
	y = 1;
	i = 0;

	while (str[i])
	{
		while (i < 7)
		{
			tab[0][x++] = str[i++] - '0';
			i++;
		}
		x = 1;
		while (i < 15)
		{
			tab[5][x++] = str[i++] - '0';
			i++;
		}
		x = 1;
		while (i < 23)
		{
			tab[y++][0] = str[i++] - '0';
			i++;
		}
		y = 1;
		while (i < 31)
		{
			tab[y++][5] = str[i++] - '0';
			i++;
		}
		y = 1;
		return (0);
	}
	return (0);
}

void	create_hints(int arr[6][6])
{
	int x = 0;
	int y = 0;

	while (y <= 5)
	{
		x = 0;
		while (x <= 5)
		{
			if (arr[y][x] == 1 && x == 0 && (y >= 1 && y <= 4))
				arr[y][x + 1] = 4;
			if (arr[y][x] == 1 && y == 0 && (x >= 1 && x <= 4))
				arr[y + 1][x] = 4;
			if (arr[y][x] == 1 && x == 5 && (y >= 1 && y <= 4))
				arr[y][x - 1] = 4;
			if (arr[y][x] == 1 && y == 5 && (x >= 1 && x <= 4))
				arr[y - 1][x] = 4;
			x++;
		}
		y++;
	}
}

void	create_hints2(int arr[6][6])
{
	int x;
	int y;
	int num;
	int count;

	x = 0;
	y = 0;
	while (y <= 5)
	{
		x = 0;
		count = 1;
		num = 1;
		while (x <= 5)
		{
			if (arr[y][x] == 4 && y == 0 && (x >= 1 && x <= 4))
				while (count <= 4)
					arr[y + count++][x] = num++;
			if (arr[y][x] == 4 && y == 5 && (x >= 1 && x <= 4))
				while (count <= 4)
					arr[y - count++][x] = num++;
			if (arr[y][x] == 4 && x == 0 && (y >= 1 && y <= 4))
				while (count <= 4)
					arr[y][x + count++] = num++;
			if (arr[y][x] == 4 && x == 5 && (x >= 1 && x <= 4))
				while (count <= 4)
					arr[y][x - count++] = num++;
			x++;
		}
		y++;
	}
}

void	print(int test[6][6])
{
	int x;
	int y;
	int i;

	y = 1;
	i = 1;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			char c = test[y][x] + '0';
			write(1, &c, 1);
			if (i != 4)
				write(1, " ", 1);
			x++;
			i++;
		}
		y++;
		i = 1;
		write(1, "\n", 1);
	}
}

int		*find_empty(int arr[6][6])
{
	int col;
	int row;

	col = 1;
	row = 1;
	static int sol[2];
	while (col < 5)
	{
		row = 0;
		while (row < 5)
		{
			if (arr [row][col] == 0)
			{
				sol[0] = row;
				sol[1] = col;
				return (sol);
			}
			if (row == 4)
			{
				if (!check_pov_line_left(arr, y))
					return (0);
				if (!check_pov_line_right(arr, y))
					return (0);
			}
			row++;
		}
		if (col == 4)
		{
			if (!check_pov_col_up(arr, y, x))
				return (0);
			if (!check_pov_col_down(arr, y, x))
				return (0);
		}
		col++;
	}
	return (0);
}

int		solve(int arr[6][6])
{
	int row;
	int col;
	int num;
	int *sol;

	num = 1;
	if (!find_empty(arr))
		return (1);
	sol = find_empty(arr);
	row = sol[0];
	col = sol[1];
	while (num <= 4)
	{
		if (check(arr, row, col, num))
		{
			arr[row][col] = num;
			if (solve(arr))
				return (1);
			arr[row][col] = 0;
		}
		num++;
	}
	return(0);
}
int		check(int arr[6][6], int y, int x, int num)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (i != x && arr[y][i] == num)
			return (0);
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (i != y && arr[i][x] == num)
			return (0);
		i++;
	}
	return (1);
}
int		check_pov_col_up(int arr[6][6], int y, int x)
{
	int mem;
	int i;
	int boxes;
	int count;
	int next;

	i = 1;
	count = 1;
	boxes = 1;
	mem = arr[1][x];
	while (count < 4)
	{
		next = arr[i + 1][x];
		if (mem < next)
		{
			boxes++;
			mem = next;
		}
		count++;
		i++;
	}
	if (boxes <= arr[0][x])
		return (1);
	return(0);
}
int		check_pov_col_down(int arr[6][6], int y, int x)
{
	int mem;
	int i;
	int boxes;
	int count;
	int next;

	i = 4;
	count = 1;
	boxes = 1;
	mem = arr[4][x];
	while (count < 4)
	{
		next = arr[i - 1][x];
		if (mem < next)
		{
			boxes++;
			mem = next;
		}
		count++;
		i--;
	}
	if (boxes <= arr[5][x])
		return (1);
	return(0);
}
int		check_pov_line_left(int arr[6][6], int y, int x)
{
	int mem;
	int i;
	int boxes;
	int count;
	int next;

	i = 1;
	count = 1;
	boxes = 1;
	mem = arr[y][1];
	while (count < 4)
	{
		next = arr[y][i + 1];
		if (mem < next)
		{
			boxes++;
			mem = next;
		}
		i++;
		count++;
	}
	if (boxes <= arr[y][0])
		return (1);
	return(0);
}

int		check_pov_line_right(int arr[6][6], int y, int x)
{
	int mem;
	int i;
	int boxes;
	int count;
	int next;

	i = 4;
	count = 1;
	boxes = 1;
	mem = arr[y][4];
	while (count < 4)
	{
		next = arr[y][i - 1];
		if (mem < next)
		{
			boxes++;
			mem = next;
		}
		count++;
		i--;
	}
	if (boxes <= arr[y][5])
		return (1);
	return(0);
}
