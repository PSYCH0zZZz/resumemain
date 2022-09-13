#include "ft_list.h"
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr == 0)
		return (NULL);
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return (NULL);
		i++;
	}
	return (begin_list);
}
