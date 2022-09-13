#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*second;

	if (*begin_list)
	{
		second = ft_create_elem(data);
		second->next = *begin_list;
		*begin_list = second;
	}
	else
		*begin_list = ft_create_elem(data);
}
