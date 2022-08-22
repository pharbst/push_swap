/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_locate_chunk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:25:33 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:47:04 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_helpers_help1(t_stack **node, t_var **vars)
{
	if ((*node)->index > (*vars)->midpoint)
		(*vars)->x++;
	if ((*node)->index < (*vars)->midpoint)
	{
		(*vars)->rot = (*vars)->x;
		(*vars)->pushtop++;
	}
	(*node) = (*node)->next;
}

static void	ft_helpers_help2(t_stack **node, t_var **vars)
{
	if ((*node)->index < (*vars)->midpoint)
	{
		(*vars)->x = 1;
		(*vars)->pushbot++;
	}
	if ((*node)->index > (*vars)->midpoint && (*vars)->x == 1)
		(*vars)->revrot++;
	(*node) = (*node)->next;
}

static void	ft_locate_chunk_helper1(t_stack *stack, t_stack **node,
		t_var **vars)
{
	int	stacklen;

	stacklen = ft_stacklen(stack);
	while ((*node)->chunk == (*vars)->chunkid && --stacklen >= 0)
		ft_helpers_help1(node, vars);
	(*vars)->x = 0;
	while ((*node)->chunk != (*vars)->chunkid && stacklen != 0)
		(*node) = (*node)->next;
	while ((*node) != stack && stacklen != 0)
		ft_helpers_help2(node, vars);
}

void	ft_locate_chunk(t_stack *stack, t_var **vars)
{
	if (!stack)
		return ;
	(*vars)->x = 0;
	(*vars)->pushbot = 0;
	(*vars)->pushtop = 0;
	(*vars)->rot = 0;
	(*vars)->revrot = 0;
	(*vars)->chunkid = stack->chunk;
	(*vars)->chunkmembers = ft_chunkmembers(stack);
	(*vars)->midpoint = ft_chunk_midpoint(stack);
	ft_locate_chunk_helper1(stack, &stack, vars);
	(*vars)->pushtotal = (*vars)->pushbot + (*vars)->pushtop;
}