#include "binary_trees.h"

/**
* binary_tree_height - that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height
* Return: height of a tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree, 0) - 1);
}

/**
* height - find the height of a binary tree
* @tree: tree to find
* @h: height of tree
* Return: height of the tree
*/
size_t height(const binary_tree_t *tree, size_t h)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (h);
	h++;
	h_left = height(tree->left, h);
	h_right  = height(tree->right, h);
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
