/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:45:24 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/29 23:48:52 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swapb(t_stack **stackb, char flag)
{
	if (ft_swap(stackb) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("sb\n", 1);
	return (0);
}
