/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subchunkb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:10:28 by pharbst           #+#    #+#             */
/*   Updated: 2023/08/22 15:10:22 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotnpushb(t_stack **stacka, t_stack **stackb, t_var *varsb)
{
	while (varsb->pushtop != 0)
	{
		if ((*stackb)->index > varsb->midpoint)
		{
			varsb->pushtop--;
			varsb->pushtotal--;
			(*stackb)->chunk = varsb->chunks;
			ft_pusha(stacka, stackb, 'p');
		}
		else
			ft_rotb(stackb, 'p');
	}
}

static void	ft_revnpushb(t_stack **stacka, t_stack **stackb, t_var *varsb)
{
	ft_revrotb(stackb, 'p');
	if ((*stackb)->index > varsb->midpoint)
	{
		varsb->pushbot--;
		varsb->pushtotal--;
		(*stackb)->chunk = varsb->chunks;
		ft_pusha(stacka, stackb, 'p');
	}
}

void	ft_subchunk_b(t_stack **stacka, t_stack **stackb, t_var *varsa,
		t_var *varsb)
{
	varsb->chunks++;
	varsa->chunks = varsb->chunks;
	while (varsb->pushtotal != 0)
	{
		if ((varsb->revrot - varsb->pushbot) < varsb->rot)
		{
			while (varsb->pushbot)
				ft_revnpushb(stacka, stackb, varsb);
			ft_rotnpushb(stacka, stackb, varsb);
		}
		else
		{
			ft_rotnpushb(stacka, stackb, varsb);
			while (varsb->pushbot != 0)
				ft_revnpushb(stacka, stackb, varsb);
			ft_rotnpushb(stacka, stackb, varsb);
		}
	}
	if ((*stackb)->chunk != varsb->chunkid)
		ft_revrotb(stackb, 'p');
}
