#include "binary_trees.h"

/**
 * binary_tree_node - creates nre binary tree
 * @parent: lparent node
 * @value: parent int value
 * Return: i
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
