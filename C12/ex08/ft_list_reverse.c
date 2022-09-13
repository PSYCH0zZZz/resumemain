#include "ft_list.h"
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*argm;
	t_list	*argm2;

	if ((*begin_list) || ((*begin_list)->next))
	{
		argm = NULL;
		while (*begin_list)
		{
			argm2 = (*begin_list)->next;
			(*begin_list)->next = argm;
			argm = *begin_list;
			*begin_list = argm2;
		}
		*begin_list = argm;
	}
}
