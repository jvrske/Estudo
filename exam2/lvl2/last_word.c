#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int	i;

		i = 0;
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (!(av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				break ;
			write (1, &av[1][i], 1);
			i++;
		}
		return (write (1, "\n", 1), 0);
	}
	else
		return (write (1, "\n", 1), 0);
}
