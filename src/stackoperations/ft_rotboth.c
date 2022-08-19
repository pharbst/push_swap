/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotboth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:02:06 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 16:07:56 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_rotboth(t_stack **stacka, t_stack **stackb)
{
	if (ft_rotate(stacka) == 1)
		return (1);
	if (ft_rotate(stackb) == 1)
		return (1);
	printf("rr\n");
	return (0);
}
