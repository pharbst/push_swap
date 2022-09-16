/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunkmembers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:29:33 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:16 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

unsigned int	ft_chunkmembers(t_stack *stack, t_var *vars)
{
	unsigned int	chunkmembers;
	t_stack			*node;

	node = stack;
	chunkmembers = 0;
	while (stack->next != node)
	{
		if (stack->chunk == vars->chunkid)
			chunkmembers++;
		stack = stack->next;
	}
	if (stack->chunk == vars->chunkid)
		chunkmembers++;
	return (chunkmembers);
}
