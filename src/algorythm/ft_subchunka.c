/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subchunka.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:16:43 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:43:58 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	ft_rotnpusha(t_stack **stacka, t_stack **stackb, t_var *varsa)
{
	while (varsa->pushtop != 0)
	{
		if ((*stacka)->index < varsa->midpoint)
		{
			varsa->pushtop--;
			varsa->pushtotal--;
			(*stacka)->chunk = varsa->chunks;
			ft_pushb(stacka, stackb, 'p');
		}
		else
			ft_rota(stacka, 'p');
	}
}

static void	ft_revnpusha(t_stack **stacka, t_stack **stackb, t_var *varsa)
{
	ft_revrota(stacka, 'p');
	if ((*stacka)->index < varsa->midpoint)
	{
		varsa->pushbot--;
		varsa->pushtotal--;
		(*stacka)->chunk = varsa->chunks;
		ft_pushb(stacka, stackb, 'p');
	}
}

void	ft_subchunk_a(t_stack **stacka, t_stack **stackb, t_var *varsa,
		t_var *varsb)
{
	varsa->chunks++;
	varsb->chunks = varsa->chunks;
	while (varsa->pushtotal != 0)
	{
		if ((varsa->revrot - varsa->pushbot) < varsa->rot)
		{
			while (varsa->pushbot)
				ft_revnpusha(stacka, stackb, varsa);
			ft_rotnpusha(stacka, stackb, varsa);
		}
		else
		{
			ft_rotnpusha(stacka, stackb, varsa);
			while (varsa->pushbot)
				ft_revnpusha(stacka, stackb, varsa);
			ft_rotnpusha(stacka, stackb, varsa);
		}
	}
	if ((*stacka)->chunk != varsa->chunkid)
		ft_revrota(stacka, 'p');
}
