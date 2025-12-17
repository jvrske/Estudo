#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*array;

	i = 0;
	if (end > start)
		len = end - start + 1;
	else 
		len = start - end + 1;
	array = malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			array[i] = end;
			i++;
			end--;
		}
		else
		{
			array[i] = end;
			end++;
			i++;
		}
	}
	return (array);
}

#include <stdio.h>
int	main()
{
	int	*a = ft_range(-1, 2);
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("%d ", a[i]);
		i++;
	}
	write (1, "\n", 1);
}