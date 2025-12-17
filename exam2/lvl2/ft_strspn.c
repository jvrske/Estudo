#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (s[i])
	{
		j = 0;
		flag = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				flag = 1;
			j++;
		}
		if (flag == 0)
			return (i);
		i++;
	}
	return (i);
}

/* int	main()
{
	char	str[10] = "abcdefgh";
	char	rej[5] = "bcda";

	printf("%zu\n", ft_strspn(str, rej));
} */