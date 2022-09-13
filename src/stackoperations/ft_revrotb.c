/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:49 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:52:38 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_revrotb(t_stack **stackb, char flag)
{
	if (ft_revrotate(stackb) == 1)
		return (1);
	if (flag == 'p')
		ft_putstr_fd("rrb\n", 1);
	return (0);
}
