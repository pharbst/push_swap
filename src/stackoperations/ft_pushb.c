/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:54:56 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/13 13:52:28 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pushb(t_stack **stacka, t_stack **stackb, char flag)
{
	t_stack	*node;

	if (!*stacka)
		return (1);
	node = ft_stackremove_node(stacka, 0);
	*stackb = ft_stackadd_front(*stackb, node);
	if (flag == 'p')
		ft_putstr_fd("pb\n", 1);
	return (0);
}
