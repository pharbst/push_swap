/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotboth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:02:06 by pharbst           #+#    #+#             */
/*   Updated: 2023/08/22 15:10:22 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotboth(t_stack **stacka, t_stack **stackb, char flag)
{
	if (ft_rotate(stacka) == 1 && flag == 'p')
		return (1);
	if (ft_rotate(stackb) == 1 && flag == 'p')
		return (1);
	if (flag == 'p')
		ft_putstr_fd("rr\n", 1);
	return (0);
}
