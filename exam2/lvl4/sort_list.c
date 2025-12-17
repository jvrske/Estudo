#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    int          data;
}                 t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*head;
	int	temp;
	int	flag;

	if (!lst || !cmp)
		return (lst);
	flag = 1;
	head = lst;
	while (flag == 1)
	{
		flag = 0;
		while (lst->next)
		{
			if (!cmp(lst->data, lst->next->data))
			{
				temp = lst->data;
				lst->data = lst->next->data;
				lst->next->data = temp;
				flag = 1;
			}
			lst = lst->next;
		}
		lst = head;
	}
	return (head);
}
