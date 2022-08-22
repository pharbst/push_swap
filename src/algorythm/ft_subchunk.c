/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subchunk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:10:28 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:12:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_subchunk_a(t_stack **stacka, t_stack **stackb, t_var *varsa,
		t_var *varsb)
{
	varsa->chunks++;
	varsb->chunks = varsa->chunks;
	while (varsa->pushtotal != 0)
	{
		if ((*stacka)->index < varsa->midpoint)
		{
			(*stacka)->chunk = varsa->chunks;
			ft_pushb(stacka, stackb);
			varsa->pushtotal--;
		}
		else
			ft_rota(stacka);
	}
}

void	ft_subchunk_b(t_stack **stacka, t_stack **stackb, t_var *varsa,
		t_var *varsb)
{
	varsb->chunks++;
	varsa->chunks = varsb->chunks;
	while (varsb->pushtotal != 0)
	{
		if ((*stackb)->index > varsb->midpoint)
		{
			(*stackb)->chunk = varsb->chunks;
			ft_pusha(stacka, stackb);
			varsb->pushtotal--;
		}
		else
			ft_rotb(stackb);
	}
}
