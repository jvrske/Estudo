#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res = res + s[i] - '0';
		i++;
	}
	return (res);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	if(ac > 1)
	{
		int	i;
		int	n;

		i = 1;
		n = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(n);
			ft_putstr(" = ");
			ft_putnbr(i * n);
			ft_putchar('\n');
			i++;
		}
	}
	else
		return (write (1, "\n", 1), 0);
}
