/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:55:41 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 16:07:28 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_pusha(t_stack **stacka, t_stack **stackb)
{
	t_stack	*node;

	if (!*stackb)
		return (1);
	node = ft_stackremove_node(stackb, 0);
	*stacka = ft_stackadd_front(*stacka, node);
	printf("pa\n");
	return (0);
}
