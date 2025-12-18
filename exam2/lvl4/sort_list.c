typedef struct    s_list
{
    struct s_list *next;
    int          data;
}                 t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*head;
	int	flag;
	int	tmp;

	if (!lst || !cmp)
		return (lst);
	head = lst;
	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		while (lst->next)
		{
			if (cmp(lst->data, lst->next->data) == 0)
			{
				tmp = lst->data;
				lst->data = lst->next->data;
				lst->next->data = tmp;
				flag = 1;
			}
			lst = lst->next;
		}
		lst = head;
	}
	return (head);
}
