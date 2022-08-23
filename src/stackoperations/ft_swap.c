/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:56:39 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 14:49:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*stash;
	size_t	len;

	if (!*stack)
		return (1);
	len = ft_stacklen(*stack);
	if (len < 2)
		return (1);
	stash = ft_stackremove_node(stack, 1);
	*stack = ft_stackadd_front(*stack, stash);
	return (0);
}
