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
	size_t h_right, h_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);
	return (h_left > h_right) ? h_left : h_right;
}
