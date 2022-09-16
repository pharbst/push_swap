/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:02:03 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:08 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_rotb(t_stack **stackb, char flag)
{
	if (ft_rotate(stackb) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("rb\n", 1);
	return (0);
}
