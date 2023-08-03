#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is the root
 *
 * @node: node to check
 *
 * Return: 1 is node is root and 0 if not or NULL
*/

int binary_tree_is_root(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
