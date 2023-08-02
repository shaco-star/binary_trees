#include "binary_trees.h"

/**
 * binary_tree_insert_left - Will insert node to left-child
 *
 * @parent: Is the node that we will create
 * @value: Is an integer value to pass to node
 *
 * Return: pointer to created node or NULL if fails
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	node->parent = parent;
	node->n = value;
	node->left = parent->left;
	node->right = NULL;
	parent->left = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
