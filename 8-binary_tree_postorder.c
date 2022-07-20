#include "binary_trees.h"

/**
* binary_tree_postorder - binar tree using post-order traversal
* @tree: is a pointer to the root node of the tree traverse
* @func: is a pointer to a funciton to call  for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
