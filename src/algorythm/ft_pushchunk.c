/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushchunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:45:57 by pharbst           #+#    #+#             */
/*   Updated: 2023/08/22 15:10:22 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushchunk(t_stack **stacka, t_stack **stackb, t_var *varsb)
{
	if (varsb->chunkmembers == 1)
		ft_pusha(stacka, stackb, 'p');
	if (varsb->chunkmembers == 1)
		return ;
	if ((*stackb)->chunk == varsb->chunkid)
		ft_pusha(stacka, stackb, 'p');
	if ((*stackb)->chunk == varsb->chunkid)
		ft_pusha(stacka, stackb, 'p');
	else
	{
		ft_revrotb(stackb, 'p');
		ft_pusha(stacka, stackb, 'p');
	}
}
