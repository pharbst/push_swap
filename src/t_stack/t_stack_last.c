/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:24:14 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:49:04 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	t_stack	*stash;

	stash = stack;
	if (!stack)
		return (NULL);
	while (stash->next != stack)
		stash = stash->next;
	return (stash);
}
