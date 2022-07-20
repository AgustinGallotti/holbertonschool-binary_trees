#include "binary_trees.h"

/**
* binary_tree_nodes - counts hte nodes with at least
* one child in a binary tree
* @tree: is a pointer to the root node of the tree
* to count the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	char count_child = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count_child = 1;
	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + count_child);
}
