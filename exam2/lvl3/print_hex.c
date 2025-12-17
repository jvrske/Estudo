#include <unistd.h>

int	ft_atoi(char *str)
{
	unsigned int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_puthex(long n)
{
	char	*base = "0123456789abcdef";

	if (n > 16)
		ft_puthex(n / 16);
	n = base[n % 16];
	write (1, &n, 1);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		ft_puthex(ft_atoi(av[1]));
		return (write (1, "\n", 1), 0);
	}
	else
		return (write (1, "\n", 1), 0);
}