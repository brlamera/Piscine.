#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
								int (*cmpf)(void *, void *))
{
	void	*result;

	result = NULL;
	if (root == NULL)
		return (NULL);
	if (root->left)
		result = btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (result == NULL && root->right != NULL)
		result = btree_search_item(root->right, data_ref, cmpf);
	return (result);
}