#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	a;
	int b;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		printf("%d", a);
		printf("\n");
	}
	else
		return (printf("\n"), 0);
}
