/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:43:12 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:09 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_swapa(t_stack **stacka, char flag)
{
	if (ft_swap(stacka) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("sa\n", 1);
	return (0);
}
