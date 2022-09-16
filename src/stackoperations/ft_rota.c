/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:59 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:07 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_rota(t_stack **stacka, char flag)
{
	if (ft_rotate(stacka) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("ra\n", 1);
	return (0);
}
