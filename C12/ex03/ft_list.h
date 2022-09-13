#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

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

#endif