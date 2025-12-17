#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char *str;

	i = 0;
	str = malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main()
{
	char	*src = "Caio";
	char	*dst = "";

	dst = ft_strdup(src);
	printf("%s\n", dst);
} */