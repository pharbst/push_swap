/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:29:42 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 11:23:50 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_getindex(t_stack **stack)
{
	t_stack		*next;
	t_stack		*node;
	size_t		index;
	size_t		len;

	index = 0;
	len = ft_stacklen(*stack);
	while (len--)
	{
		node = *stack;
		while (node->index != 0)
			node = node->next;
		next = node->next;
		while (next != *stack)
		{
			if (node->content > next->content && next->index == 0)
				node = next;
			next = next->next;
		}
		node->index = ++index;
	}
}
