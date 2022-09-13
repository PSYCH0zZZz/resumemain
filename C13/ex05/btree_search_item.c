#include "ft_btree.h"
void	*btree_search_item(t_btree *root, void *data_ref, \
int (*cmpf)(void *, void *))
{
	void	*argm;

	argm = NULL;
	if (root)
	{
		argm = btree_search_item(root->left, data_ref, cmpf);
		if (!(argm) && (*cmpf)(root->item, data_ref))
			argm = root->item;
		if (!(argm))
			argm = btree_search_item(root->right, data_ref, cmpf);
	}
	return (argm);
}
