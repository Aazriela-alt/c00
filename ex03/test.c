#include <unistd.h>

void    ft_print_reverse_alphabet(void);
void    ft_melissa(void);

int     main(void)
{
        ft_print_reverse_alphabet();
	ft_melissa();
        write(1, "\n", 1);
        return(0);
}

void	ft_print_reverse_alphabet(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		write(1, &c, 1);
	 	c--;
	}
}

void	ft_melissa(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
