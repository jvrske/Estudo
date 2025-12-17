#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	isSignal(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	else
		return (0);
}

int	main(int ac, char *av[])
{
	int	i;
	int	res;

	i = 0;
	if (ac == 4)
	{
		if (isSignal(av[2][0]) == 1)
		{
			if (av[1] && av[3])
			{
				if (av[2][0] == '+')
					res = atoi(av[1]) + atoi(av[3]);
				else if (av[2][0] == '-')
					res = atoi(av[1]) - atoi(av[3]);
				else if (av[2][0] == '*')
					res = atoi(av[1]) * atoi(av[3]);
				else if (av[2][0] == '/')
					res = atoi(av[1]) / atoi(av[3]);
				else if (av[2][0] == '%')
					res = atoi(av[1]) % atoi(av[3]);
				i++;
				printf("%d\n", res);
			}
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
