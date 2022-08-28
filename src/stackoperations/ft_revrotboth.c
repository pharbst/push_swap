/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotboth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:55 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/28 17:09:58 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_revrotboth(t_stack **stacka, t_stack **stackb)
{
	if (ft_revrotate(stacka) == 1)
		return (1);
	if (ft_revrotate(stackb) == 1)
		return (1);
	ft_putstr_fd("rrr\n", 1);
	return (0);
}
