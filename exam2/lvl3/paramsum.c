#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		ft_putnbr(ac - 1);
		return (write (1, "\n", 2), 0);
	}
	else
		return (write (1, "0\n", 2), 0);
}
