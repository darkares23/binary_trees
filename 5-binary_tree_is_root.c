#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given node is a root
* @node: node to verify
* Return: true or false
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}
