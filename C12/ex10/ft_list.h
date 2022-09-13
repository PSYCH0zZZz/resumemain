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

t_list	*ft_add_elem(t_list *list, void *data)
{
	t_list	*first;

	first = (t_list *)malloc(sizeof(t_list));
	if (first)
	{
		first->data = data;
		first->next = list;
	}
	return (first);
}

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

#endif