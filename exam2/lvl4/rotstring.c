#include <unistd.h>

void	rotstring(char *s)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	start = i;
	while (s[i] != ' ' && s[i] != '\t' && s[i])
		i++;
	len = i - start;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t')
			{
				write(1, &s[i], 1);
				i++;
			}
			write (1, " ", 1);
		}
	}
	if (len > 0)
		write (1, s + start, len);
}

int	main(int ac, char *av[])
{
	if (ac > 1)
		rotstring(av[1]);
	write (1, "\n", 1);
}
