#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @tree: is a pointer ot the node to find the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t * node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	node = node->parent;
	if (node->parent == NULL || node->parent->left == NULL
		|| node->parent->right == NULL)
			return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
