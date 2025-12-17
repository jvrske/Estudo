#include <unistd.h>

int	ft_atoi(char *c)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (c[i] >= 9 && c[i] <= 13 || c[i] == 32)
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9' && c[i])
	{
		n = n * 10 + c[i] - '0';  
		i++;
	}
	return (n * sign);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac != 2 || ft_atoi(av[1]) <= 0)
		return (write(1, "0\n", 2), 0);
	i = 0;
	j = ft_atoi(av[1]);
	while (j > 1)
	{
		if (is_prime(j))
			i = i+j;
		j--;
	}
	ft_putnbr(i);
	return (write(1, "\n", 1), 0);
}
