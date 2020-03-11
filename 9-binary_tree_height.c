#include "binary_trees.h"

/**
 * binary_tree_height - calculates de height of the binary tree
 * @tree: tree to calculate height
 * Return: return height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return (left_height >= right_height ? left_height : right_height);
}
