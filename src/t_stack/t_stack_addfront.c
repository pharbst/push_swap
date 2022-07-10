/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_addfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:35:05 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 19:57:08 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	ft_stackadd_front(t_stack **stack, t_stack *newnode)
{
	t_stack	*last;

	if (stack)
	{
		newnode->next = *stack;
		last = ft_stacklast(*stack);
		last->next = newnode;
		*stack = newnode;
	}
}
