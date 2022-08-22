/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:23:15 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:12:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_printstack(t_stack *stack)
{
	size_t	len;
	size_t	x;

	if (!stack)
		return ;
	x = 0;
	len = ft_stacklen(stack);
	while (len--)
	{
		printf("stack index = %4zu|| stack content = %12d|| index:%4zu|| chunkid:%5d|| address:%p|| next:%p\n", x, stack->content, stack->index,stack->chunk, stack, stack->next);
		x++;
		stack = stack->next;
	}
	printf("\n\n");
	return ;
}

t_stack	*ft_stackcreate_basic()
{
	t_stack	*stack;
	t_stack	*node;

	stack = ft_stack_new(42);
	node = ft_stack_new(INT_MAX);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(INT_MIN);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(-2147483647);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(666);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(1);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(0);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(28356968);
	ft_stackadd_end(stack, node);
	return (stack);
}

void	ft_printvars(t_var *varsa)
{
	printf("x = %u|| y = %u|| chunkid = %5u|| pushtop = %3u|| pushbot = %3u|| pushtotal = %3u|| rot = %3u|| revrot = %3u|| chunks = %5d|| chunkmembers = %d|| midpoint = %f", varsa->x, varsa->y, varsa->chunkid, varsa->pushtop, varsa->pushbot, varsa->pushtotal, varsa->rot, varsa->revrot, varsa->chunks, varsa->chunkmembers, varsa->midpoint);
	printf("\n\n");
}

void	ft_printall(t_stack *stacka, t_stack *stackb, t_var *varsa, t_var *varsb)
{
	printf("\33[0;31m###############################################################################################################################\033[0;37m\n");
	ft_printstack(stacka);
	ft_printstack(stackb);
	ft_printvars(varsa);
	ft_printvars(varsb);
	printf("\33[0;31m_________________________________________________________________________________________________________________________________________\033[0;37m\n\n\n");
}
