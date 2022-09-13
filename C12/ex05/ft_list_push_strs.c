#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*argm;
	t_list	*argm2;
	int		i;

	i = 1;
	if (size == 0)
	{
		return (NULL);
	}
	argm = ft_create_elem(strs[0]);
	argm2 = argm;
	while (i < size)
	{
		argm = ft_create_elem(strs[i]);
		argm->next = argm2;
		argm2 = argm;
		i++;
	}
	return (argm);
}
