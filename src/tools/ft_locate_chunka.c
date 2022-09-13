/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_locate_chunka.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:53:29 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:53:33 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_locate_top(t_stack **stacka, t_var *varsa)
{
	if ((*stacka)->index > varsa->midpoint)
		varsa->x++;
	if ((*stacka)->index < varsa->midpoint)
		varsa->rot = varsa->x;
	if ((*stacka)->index < varsa->midpoint)
		varsa->pushtop++;
	(*stacka) = (*stacka)->next;
}

static void	ft_locate_bot(t_stack **stacka, t_var *varsa)
{
	if ((*stacka)->index < varsa->midpoint)
	{
		varsa->x = 1;
		varsa->revrot++;
		varsa->pushbot++;
	}
	if ((*stacka)->index > varsa->midpoint && varsa->x == 1)
		varsa->revrot++;
	(*stacka) = (*stacka)->next;
}

static void	ft_locate_helper(t_stack *stacka, t_stack *HEAD, t_var *varsa)
{
	while (stacka->chunk == varsa->chunkid && varsa->stacklen-- != 0)
		ft_locate_top(&stacka, varsa);
	varsa->x = 0;
	while (stacka->chunk != varsa->chunkid && varsa->stacklen-- != 0)
		stacka = stacka->next;
	while (stacka != HEAD && varsa->stacklen-- != 0)
		ft_locate_bot(&stacka, varsa);
}

void	ft_locate_chunka(t_stack *stacka, t_var *varsa)
{
	if (!stacka)
		return ;
	varsa->x = 0;
	varsa->y = 0;
	varsa->pushbot = 0;
	varsa->pushtop = 0;
	varsa->pushtotal = 0;
	varsa->rot = 0;
	varsa->revrot = 0;
	varsa->chunkid = stacka->chunk;
	varsa->stacklen = ft_stacklen(stacka);
	varsa->chunkmembers = ft_chunkmembers(stacka, varsa);
	varsa->midpoint = ft_chunk_midpoint(stacka, varsa);
	ft_locate_helper(stacka, stacka, varsa);
	varsa->pushtotal = varsa->pushbot + varsa->pushtop;
}
