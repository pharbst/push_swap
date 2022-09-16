/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_removenode.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:43:28 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:13 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*ft_stackremove_node(t_stack **stack, size_t index)
{
	t_stack	*before_node;
	t_stack	*node;
	t_stack	*next;

	if (index == 0)
		before_node = ft_stacklast(*stack);
	else
		before_node = ft_stacksearch(*stack, index - 1);
	node = before_node->next;
	next = node->next;
	if (ft_stacklen(*stack) == 1)
	{
		*stack = NULL;
		return (node);
	}
	before_node->next = next;
	node->next = node;
	if (*stack == node)
		*stack = next;
	return (node);
}
