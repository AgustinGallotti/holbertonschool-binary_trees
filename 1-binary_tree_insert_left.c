#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child
* @value: value to store in the new node
* Return: pointre to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;
	return (new);
}
