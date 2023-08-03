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
	size_t size;

	if (!tree)
		return (0);
	size++;
	binary_tree_height(tree);


	return (size);
}
