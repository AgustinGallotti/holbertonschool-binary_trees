#include "binary_trees.h"

/**
* get_height_p - checking fullness and get the height
* @tree: tree to check
* Return: wheather is balanced
*/
int get_height_p(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	h_left = get_height_p(tree->left);
	if (h_left == 0)
		return (0);
	h_right = get_height_p(tree->right);
	if (tree->right == 0)
		return (0);
	return (h_left + h_right + 1);
}
/**
* binary_tree_is_perfect - get height perfect
* @tree: tree to check
* Return: whether tree is balanced
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	h_left = get_height_p(tree->left);
	if (h_left == 0)
		return (0);
	h_right = get_height_p(tree->right);
	if (h_right != h_left)
		return (0);
	return (1);
}
