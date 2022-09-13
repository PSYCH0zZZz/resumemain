#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*argm;

	if (*begin_list)
	{
		argm = *begin_list;
		while (argm->next)
			argm = argm->next;
		argm->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
