/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subchunk_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:10:28 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/18 15:28:08 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_subchunk_a(t_stack **stacka, t_stack **stackb, t_var **varsa,
		t_var **varsb)
{
	ft_locate_chunk((*stacka), varsa);
	(*varsa)->chunks++;
	(*varsb)->chunks = (*varsa)->chunks;
	while ((*varsa)->pushtotal != 0)
	{
		if ((*stacka)->index < (*varsa)->midpoint)
		{
			(*stacka)->chunk = (*varsa)->chunks;
			ft_pushb(stacka, stackb);
			(*varsa)->pushtotal--;
		}
		else
			ft_rota(stacka);
	}
}
