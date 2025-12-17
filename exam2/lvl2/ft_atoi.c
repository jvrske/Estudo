int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	res = 0;
	sig = 1;
	if (str[i] >= 9 && str[i] <= 13 || str[i] == 32 || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sig);
}

/* #include <stdio.h>

int main()
{
	char	*a = "--1234";
	printf("%d\n", ft_atoi(a));
} */
