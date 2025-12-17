void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	temp;
	int flag;

	flag = 1;
	while (flag == 1)
	{
		i = 0;
		flag = 0;
		while (i + 1 < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				flag = 1;
			}
			i++;
		}
	}
}
