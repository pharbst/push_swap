/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_locate_chunkb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:54:01 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:53:38 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_locate_top(t_stack **stackb, t_var *varsb)
{
	if ((*stackb)->index < varsb->midpoint)
		varsb->x++;
	if ((*stackb)->index > varsb->midpoint)
		varsb->rot = varsb->x;
	if ((*stackb)->index > varsb->midpoint)
		varsb->pushtop++;
	(*stackb) = (*stackb)->next;
}

static void	ft_locate_bot(t_stack **stackb, t_var *varsb)
{
	if ((*stackb)->index > varsb->midpoint)
	{
		varsb->x = 1;
		varsb->revrot++;
		varsb->pushbot++;
	}
	if ((*stackb)->index < varsb->midpoint && varsb->x == 1)
		varsb->revrot++;
	(*stackb) = (*stackb)->next;
}

static void	ft_locate_helper(t_stack *stackb, t_stack *HEAD, t_var *varsb)
{
	while (stackb->chunk == varsb->chunkid && varsb->stacklen-- != 0)
		ft_locate_top(&stackb, varsb);
	varsb->x = 0;
	while (stackb->chunk != varsb->chunkid && varsb->stacklen-- != 0)
		stackb = stackb->next;
	while (stackb != HEAD && varsb->stacklen-- != 0)
		ft_locate_bot(&stackb, varsb);
}

void	ft_locate_chunkb(t_stack *stackb, t_var *varsb)
{
	if (!stackb)
		return ;
	varsb->x = 0;
	varsb->y = 0;
	varsb->pushbot = 0;
	varsb->pushtop = 0;
	varsb->pushtotal = 0;
	varsb->rot = 0;
	varsb->revrot = 0;
	varsb->chunkid = stackb->chunk;
	varsb->stacklen = ft_stacklen(stackb);
	varsb->chunkmembers = ft_chunkmembers(stackb, varsb);
	varsb->midpoint = ft_chunk_midpoint(stackb, varsb);
	ft_locate_helper(stackb, stackb, varsb);
	varsb->pushtotal = varsb->pushbot + varsb->pushtop;
}
