/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_midpoint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:28:30 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/26 17:33:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

float	ft_chunk_midpoint(t_stack *stack, t_var *vars)
{
	t_stack			*node;
	t_stack			*comparemin;
	t_stack			*comparemax;

	vars->chunkid = stack->chunk;
	node = stack;
	comparemin = node;
	comparemax = node;
	while (node->next != stack)
	{
		node = node->next;
		if (node->chunk == vars->chunkid)
		{
			if (node->index < comparemin->index)
				comparemin = node;
			if (node->index > comparemax->index)
				comparemax = node;
		}
	}
	return (((comparemax->index + comparemin->index) / 2.0));
}
