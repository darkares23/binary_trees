#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the left-child of another node
* @parent: Pointer to the parent node
* @value: node value
* Return: node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;

	parent->right = new;
	return (new);
}
