#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	t_list	*argm;

	argm = begin_list;
	while (argm != 0)
	{
		if ((*cmp)(argm->data, data_ref) == 0)
			(*f)(argm->data);
		argm = argm->next;
	}
}
