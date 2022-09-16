/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrota.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:05 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_revrota(t_stack **stacka, char flag)
{
	if (ft_revrotate(stacka) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("rra\n", 1);
	return (0);
}
