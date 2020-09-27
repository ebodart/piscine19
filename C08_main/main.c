
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);


int main(void)
{
    char *tab[] = {"estelle", "bob", "lol"};
    struct s_stock_str* oui = ft_strs_to_tab(3, tab);
    ft_show_tab(oui);
    return (0);
}

