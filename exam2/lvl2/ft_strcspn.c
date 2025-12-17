#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/* int	main()
{
	char	str[9] = "abcdefgh";
	char	rej[4] = "fed";

	printf("%zu\n", ft_strcspn(str, rej));
} */
