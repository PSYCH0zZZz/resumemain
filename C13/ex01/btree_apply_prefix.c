#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->item);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
		if (root->left)
			btree_apply_prefix(root->left, applyf);
	}
}
