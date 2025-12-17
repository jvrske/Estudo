int	mdc(unsigned int a, unsigned int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	res;
	int	mmdc;

	mmdc = mdc(a, b);
	res = (a * b) / mmdc;
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 3)
{
	unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
	printf("LCM: %u\n", m);
}
}*/