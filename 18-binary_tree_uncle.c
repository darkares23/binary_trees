#include "binary_trees.h"
/**
 * binary_tree_uncle - find node siblings
 * @node: node to find sibling
 * Return: sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent || !node->parent ||
		!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
