/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 11:53:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/04/23 12:13:26 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

t_node		*add_node(t_node *root, char *key, char *value)
{
	if (!root)
		return (new_node(0, key, value));
	if (ft_strcmp(root->key, key) < 0)
	{
		if (root->left)
			return (add_node(root->left, key, value));
		else
		{
			root->left = new_node(root, key, value);
			return (root->left);
		}
	}
	else
	{
		if (root->right)
			return (add_node(root->right, key, value));
		else
		{
			root->right = new_node(root, key, value);
			return (root->right);
		}
	}
}
