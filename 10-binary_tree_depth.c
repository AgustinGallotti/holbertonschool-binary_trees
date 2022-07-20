#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in binary tree
* @tree: is a pointer to the node measure the depth
* Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *pointer = (binary_tree_t *) tree;

	if (tree == NULL)
		return (0);
	while (pointer->parent != NULL)
	{
		depth++;
		pointer = pointer->parent;
	}
	return (depth);
}
