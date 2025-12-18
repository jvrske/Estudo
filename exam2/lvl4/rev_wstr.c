#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int	i;
		int	j;

		i = 0;
		while (av[1][i])
			i++;
		i--;
		while (i > 0)
		{
			while (i > 0 && (av[1][i - 1] != ' ' && av[1][i - 1] != '\t'))
				i--;
			j = i;
			while (av[1][j] && av[1][j] != ' ' && av[1][i] != '\t')
			{
				write (1, &av[1][j], 1);
				j++;
			}
			if (i > 0)
				write (1, " ", 1);
			i--;
		}
		return (write (1, "\n", 1), 0);
	}
	return (write (1, "\n", 1), 0);
}
