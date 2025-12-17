#include <unistd.h>

void	capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if (s[i - 1] <= 32 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		write (1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		int	i;

		i = 1;
		while (av[i])
		{
			capitalizer(av[i]);
			write (1, "\n", 1);
			i++;
		}
		return (0);
	}
	else
		return (write (1, "\n", 1), 0);
}
