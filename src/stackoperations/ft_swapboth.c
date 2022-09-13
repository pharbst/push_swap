/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapboth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:59:52 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:53:11 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swapboth(t_stack **stacka, t_stack **stackb, char flag)
{
	if (ft_swap(stacka) == 1)
		return (1);
	if (ft_swap(stackb) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("ss\n", 1);
	return (0);
}
