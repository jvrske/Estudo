void sort_int_tab(int *tab, unsigned int size)
{
	int	flag;
	int	tmp;
	int	i;

	flag = 1;
	while (flag == 1)
	{
		i = 0;
		flag = 0;
		while (i + 1 < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}

