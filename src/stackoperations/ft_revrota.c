/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrota.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/22 12:12:35 by pharbst          ###   ########.fr       */
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
