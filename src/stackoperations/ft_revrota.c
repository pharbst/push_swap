/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrota.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 14:49:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_revrota(t_stack **stacka)
{
	if (ft_revrotate(stacka) == 1)
		return (1);
	printf("rra\n");
	return (0);
}
