/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:50:56 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/09 15:53:13 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*node;

	if ((*stack)->next == *stack)
		return (1);
	node = *stack;
	node = node->next;
	*stack = node;
	return (0);
}