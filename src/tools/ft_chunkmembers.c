/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunkmembers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:29:33 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 16:27:50 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_chunkmembers(t_stack *stack)
{
	int		chunkid;
	int		chunkmembers;
	t_stack	*node;

	node = stack;
	chunkmembers = 0;
	chunkid = stack->chunk;
	while (stack->next != node)
	{
		if (stack->chunk == chunkid)
			chunkmembers++;
		stack = stack->next;
	}
	if (stack->chunk == chunkid)
		chunkmembers++;
	return (chunkmembers);
}
