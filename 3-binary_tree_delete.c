#include "binary_trees.h"

/**
 * binary_tree_delete - delete all nodes of tree
 *
 * @tree:  tree that we want to delete
 *
 * Return: 0
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
