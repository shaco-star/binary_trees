#include "binary_trees.h"

/**
 * binary_tree_node - Create a node in a binary tree
 *
 * @parent: Is the node that we will create
 * @value: Is an integer value to pass to node
 *
 * Return: pointer to created node or NULL if fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
