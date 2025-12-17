#include <unistd.h>

int	main(int ac, char *av[])
{
	if(ac == 3)
	{
		int	i;
		int	j;
		int	check[256] = {0};

		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !check[av[2][j]])
				{
					check[av[2][j]] = 1;
					write(1, &av[2][j], 1);
				}
				j++;
			}
			i++;
		}
		return (write (1, "\n", 1), 0);
	}
	else
		return (write (1, "\n", 1), 0);
}
