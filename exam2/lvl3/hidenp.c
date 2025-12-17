#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int	i;
		int	j;

		i = 0;
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			if (av[1][i + 1] == '\0')
				return (write (1, "1\n", 2), 0);
			j++;
		}
		return (write (1, "0\n", 2), 0);
	}
	else
		return (write (1, "\n", 1), 0);
}
