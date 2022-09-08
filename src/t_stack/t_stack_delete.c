/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:30:29 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/08 15:06:05 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_stackdelete(t_stack *stack)
{
	t_stack	*next;
	int		len;

	len = ft_stacklen(stack);
	while (len--)
	{
		next = stack->next;
		ft_stackdel_node(stack);
		stack = next;
	}
	return ;
}
