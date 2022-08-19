/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:49 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 16:07:41 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_revrotb(t_stack **stackb)
{
	if (ft_revrotate(stackb) == 1)
		return (1);
	printf("rrb\n");
	return (0);
}
