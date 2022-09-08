/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_searchnode.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:33:39 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/08 15:06:01 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_stacksearch(t_stack *stack, size_t index)
{
	if (!stack)
		return (NULL);
	while (index--)
		stack = stack->next;
	return (stack);
}
