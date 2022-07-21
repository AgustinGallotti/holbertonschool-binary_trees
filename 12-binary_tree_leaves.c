#include "binary_trees.h"

/**
* binary_tree_leaves - count the leaves in a binary tree
* @tree: is a pointer to the root node of the tree
* to count the number of leaves
* Return: 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int nb = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		nb = nb + 1;
	else
	{
		if (tree->left != NULL)
			nb += binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			nb += binary_tree_leaves(tree->right);
	}
	return (nb);
}
