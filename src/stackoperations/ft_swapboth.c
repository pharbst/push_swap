/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapboth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:59:52 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/28 17:10:50 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swapboth(t_stack **stacka, t_stack **stackb)
{
	if (ft_swap(stacka) == 1)
		return (1);
	if (ft_swap(stackb) == 1)
		return (1);
	ft_putstr_fd("ss\n", 1);
	return (0);
}
