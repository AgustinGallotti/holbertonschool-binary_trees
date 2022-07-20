#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a node as the right-child of another node
* @parent: is a pointer to the node to insert the right-child
* @value: is the value to store in the new node
* Return: a pointer to the created node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if	(parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = parent->right;
	new->left = NULL;
	new->parent = parent;
	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	return (new);
}
