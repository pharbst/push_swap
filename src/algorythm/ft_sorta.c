/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorta.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:13:50 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:12:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sorta(t_stack **stacka, t_var *varsa)
{
	if (ft_stacklast(*stacka)->chunk == varsa->chunkid)
		ft_revrota(stacka);
	if ((*stacka)->content > (*stacka)->next->content)
		ft_swapa(stacka);
}
