#include "ft_btree.h"
int	btree_level_count(t_btree *root)
{
	int	argm1;
	int	argm2;

	argm2 = 0;
	argm1 = 0;
	if (root)
	{
		argm1 = btree_level_count(root->left);
		argm2 = btree_level_count(root->right);
		if (argm1 > argm2)
			return (argm1 + 1);
		else if (argm2 > argm1)
			return (argm2 + 1);
	}
	else
		return (0);
}
