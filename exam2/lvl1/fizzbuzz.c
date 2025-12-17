#include <unistd.h>

void	ft_putchar(char d)
{
	write (1, &d, 1);
}

void	ft_putnbr(int c)
{
	if (c >= 10)
		ft_putnbr(c / 10);
	ft_putchar((c % 10) + '0');
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else
			ft_putnbr(i);
		
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
