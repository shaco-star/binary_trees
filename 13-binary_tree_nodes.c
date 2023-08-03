#inlcude "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 *
 * @tree: pointer to root node
 *
 * Return: count, 0 if NULL or fail
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return ((binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right)));
}
