#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*argm;

	argm = (t_btree *)malloc(sizeof(t_btree));
	if (argm)
	{	
		argm->right = 0;
		argm->left = 0;
		argm->item = item;
	}
	return (argm);
}
