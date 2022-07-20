#include "binary_trees.h"

/**
* binary_tree_delete - function that deletes an entire binary tree
* @tree: is a pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_del(tree);
}

/**
* binary_tree_del - delete after verifying root
* @node: tree node to delete
*/
void binary_tree_del(binary_tree_t *node)
{
	if (node->left != NULL)
		binary_tree_del(node->left);
	if (node->right != NULL)
		binary_tree_del(node->right);
	free(node);
}
