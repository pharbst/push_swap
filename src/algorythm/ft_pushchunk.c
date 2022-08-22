/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushchunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:45:57 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:18:29 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_pushchunk(t_stack **stacka, t_stack **stackb, t_var *varsb)
{
	if (varsb->chunkmembers == 1)
		ft_pusha(stacka, stackb);
	if (varsb->chunkmembers == 1)
		return ;
	if ((*stackb)->chunk == varsb->chunkid)
		ft_pusha(stacka, stackb);
	if ((*stackb)->chunk == varsb->chunkid)
		ft_pusha(stacka, stackb);
	else
	{
		ft_revrotb(stackb);
		ft_pusha(stacka, stackb);
	}
}
