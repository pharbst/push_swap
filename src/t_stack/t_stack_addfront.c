/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_addfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:35:05 by pharbst           #+#    #+#             */
/*   Updated: 2023/08/22 15:10:22 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stackadd_front(t_stack *stack, t_stack *newnode)
{
	t_stack	*last;

	if (stack)
	{
		newnode->next = stack;
		last = ft_stacklast(stack);
		last->next = newnode;
		stack = newnode;
	}
	else
		stack = newnode;
	return (stack);
}
