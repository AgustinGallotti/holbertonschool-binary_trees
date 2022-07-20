#include "binary_trees.h"

/**
* get_height - of a binary tree
* @tree: tree to get height
* Return: height
*/
size_t get_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		h_left = get_height(tree->left);
	if (tree->right  != NULL)
		h_right = get_height(tree->right);
	if (h_left > h_right)
		return (h_left + 1);
	return (h_right + 1);
}

/**
* binary_tree_balance - return the balance of a binary tree
* @tree: tree to check
* Return: balance factor of a tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (get_height(tree->left - get_height(tree->right)));
}
