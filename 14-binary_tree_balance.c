#include "binary_trees.h"

/**
 * max - max of tree
 *
 * @a: left node
 * @b: right node
 *
 * Return: bigger node
*/

int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - hieght of node
 *
 * @node: pointer to node
 *
 * Return: 0 if NULL
*/

int height(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (1 + max(height(node->left), height(node->right)));
}

/**
 * binary_tree_balance - check for balance of tree
 *
 * @tree: pointer to the root of tree
 *
 * Return: 0 if NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
