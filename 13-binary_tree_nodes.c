#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates de height of the binary tree
 * @tree: tree to calculate height
 * Return: return height
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
