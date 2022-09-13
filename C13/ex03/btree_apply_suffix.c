#include "ft_bthree.h"
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->right)
			btree_apply_suffix(root->right, applyf);
		if (root->left)
			btree_apply_suffix(root->left, applyf);
		applyf(root->item);
	}
}
