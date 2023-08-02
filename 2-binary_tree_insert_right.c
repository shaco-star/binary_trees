#include "binary_trees.h"

/**
 * binary_tree_insert_right - Will insert node to right-child
 *
 * @parent: Is the node that we will create
 * @value: Is an integer value to pass to node
 *
 * Return: pointer to created node or NULL if fails
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
