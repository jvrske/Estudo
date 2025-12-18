#include <unistd.h>

void	rostring(char *s)
{
	int	start;
	int	len;
	int	i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	start = i;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
	len = i - start;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (s[i])
		{
			while(s[i] && (s[i] != ' ' && s[i] != '\t'))
			{
				write (1, &s[i], 1);
				i++;
			}
			write (1, " ", 1);
		}
	}
	if (len > 0)
		write (1, &s[start], len);
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		rostring(av[1]);
		return (write (1, "\n", 1), 0);
	}
	else
		return (write (1, "\n", 1), 0);
}
