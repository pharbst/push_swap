/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:29:46 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 14:49:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_checknode(t_stack *stack, t_stack *node)
{
	t_stack	*next;
	size_t	len;

	len = ft_stacklen(stack);
	next = stack;
	while (len--)
	{
		if (next->content == node->content)
			return (1);
		next = next->next;
	}
	return (ft_stackadd_end(stack, node), 0);
}
