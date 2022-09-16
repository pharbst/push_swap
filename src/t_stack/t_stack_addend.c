/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_addend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:43:07 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:10 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_stackadd_end(t_stack *stack, t_stack *node)
{
	t_stack	*last;

	if (!stack || !node)
		return ;
	last = ft_stacklast(stack);
	last->next = node;
	node->next = stack;
	return ;
}
