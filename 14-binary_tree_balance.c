#include "binary_trees.h"

/**
 * get_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, or -1 if tree is NULL
 */
int get_height(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
        return (-1);

    left_height = get_height(tree->left);
    right_height = get_height(tree->right);

    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
        return (0);

    left_height = get_height(tree->left);
    right_height = get_height(tree->right);

    return (left_height - right_height);
}
