/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:21:13 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:51:18 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortthree(t_stack **stacka)
{
	if ((*stacka)->index > (*stacka)->next->index
		&& (*stacka)->index > (*stacka)->next->next->index)
		ft_rota(stacka, 'p');
	if ((*stacka)->index < (*stacka)->next->index
		&& (*stacka)->next->index > (*stacka)->next->next->index)
		ft_revrota(stacka, 'p');
	if ((*stacka)->index > (*stacka)->next->index)
		ft_swapa(stacka, 'p');
}
