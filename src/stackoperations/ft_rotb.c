/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:02:03 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/28 17:10:15 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_rotb(t_stack **stackb)
{
	if (ft_rotate(stackb) == 1)
		return (1);
	ft_putstr_fd("rb\n", 1);
	return (0);
}
