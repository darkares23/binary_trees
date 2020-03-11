#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to verify
 * Return: true or false
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is full
 * @tree: tree to calculate height
 * Return: return height
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = binary_tree_is_leaf(tree->left);
	r = binary_tree_is_leaf(tree->right);

	return (l && r);
}
