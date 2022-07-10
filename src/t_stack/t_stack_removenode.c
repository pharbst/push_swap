/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:43:28 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 11:07:00 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_stackremove_node(t_stack **stack, size_t index)
{
	t_stack	*stash;
	t_stack	*cache;

	if (stack)
	{
		index -= 1;
		stash = *stack;
		while (--index > 0)
			stash = stash->next;
		if (index == -1)
			stash = ft_stacklast(*stack);
		cache = stash->next;
		stash->next = stash->next->next;
		return (cache);
	}
}
