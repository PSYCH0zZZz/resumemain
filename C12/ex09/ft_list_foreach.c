#include "ft_list.h"
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*argm;

	argm = begin_list;
	while (argm)
	{
		(*f)(argm->data);
		argm = argm->next;
	}
}
