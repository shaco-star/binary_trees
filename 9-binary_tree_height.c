#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 *
 * @tree: pointer to root node
 *
 * Return: return 0 is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right, h_left;

	if (tree == NULL)
		return (0);
	h_right = binary_tree_height(tree->right);
	h_left = binary_tree_height(tree->left);
	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}
