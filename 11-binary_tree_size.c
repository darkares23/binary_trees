#include "binary_trees.h"

/**
 * binary_tree_size - calculates de height of the binary tree
 * @tree: tree to calculate height
 * Return: return height
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (1);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
