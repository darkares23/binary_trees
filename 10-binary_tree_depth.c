#include "binary_trees.h"

/**
 * binary_tree_depth - calculates de height of the binary tree
 * @tree: tree to calculate height
 * Return: return height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || (!tree->parent))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
