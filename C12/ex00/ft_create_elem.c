#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*first;

	first = (t_list *)malloc(sizeof(t_list));
	if (first)
	{
		first->data = data;
		first->next = NULL;
	}
	return (first);
}
