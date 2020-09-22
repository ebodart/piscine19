
#include <unistd.h>

int    tab(char **argv, int tab[6][6]);
void print(int test[6][6]);

int		main(int argc, char **argv)
{
	int test[6][6]= {};

	tab(argv, test);
	//create_hints(test);
	//create_hints2(test);
	//solve(test);
	print(test);
}

int    tab(char **argv, int tab[6][6])
{
	int i;
	int x;
	int y;
	char *str;
	
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
		return 0;
	}
	return 0;
}

void print(int test[6][6])
{
    int x;
    int y = 1;
    int i = 1;

    while (y <= 4)
    {
        x = 1;
        while(x <= 4)
        {
            char c = test[y][x] + '0';
            write(1, &c,1);
            if(i != 4)
                write(1, " ",1);
            x++;
            i++;
        }
        y++;
        i=1;
        write(1,"\n",1);
    }
}