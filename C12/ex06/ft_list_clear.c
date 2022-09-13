#include "ft_list.h"

void	ftree_fct(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*argm;

	argm = NULL;
	while (begin_list)
	{
		if (begin_list->next)
			argm = begin_list->next;
		else
			argm = NULL;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = argm;
	}
}
