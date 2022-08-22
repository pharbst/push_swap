/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:16:06 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 11:33:31 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_push_swap(t_stack **stacka, t_stack **stackb, t_var *varsa, t_var *varsb)
{
	while (ft_checksorted((*stacka)) == 1 || ft_stacklen((*stackb)) != 0)
	{
		ft_locate_chunk((*stacka), &varsa);
		ft_locate_chunk((*stackb), &varsb);

		ft_printall((*stacka), (*stackb), varsa, varsb);
		
		if (ft_checksorted((*stacka)) == 1)
		{
			if (varsa->chunkmembers == 3 && varsa->chunkid == 0)
			{
				// ft_sort_three(&(*stacka));
				if ((*stacka)->index > (*stacka)->next->index && (*stacka)->index > (*stacka)->next->next->index)
					ft_rota(&(*stacka));
				if ((*stacka)->index < (*stacka)->next->index && (*stacka)->next->index > (*stacka)->next->next->index)
					ft_revrota(&(*stacka));
				if ((*stacka)->index > (*stacka)->next->index)
					ft_swapa(&(*stacka));
			}
			else if (varsa->chunkmembers >= 3)
				ft_subchunk_a(stacka, stackb, varsa, varsb);
			else
				ft_sorta(stacka, varsa);
				//ft_swapa(&(*stacka));
		}
		else
		{
			if (varsb->chunkmembers <= 2)
				ft_pushchunk(stacka, stackb, varsb);
			else
				ft_subchunk_b(stacka, stackb, varsa, varsb);
		}
	}
	ft_printall((*stacka), (*stackb), varsa, varsb);
	ft_stackdelete((*stacka));
	ft_stackdelete((*stackb));
}
