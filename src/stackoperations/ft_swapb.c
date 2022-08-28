/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:45:24 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/28 17:10:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swapb(t_stack **stackb)
{
	if (ft_swap(stackb) == 1)
		return (1);
	ft_putstr_fd("sb\n", 1);
	return (0);
}
