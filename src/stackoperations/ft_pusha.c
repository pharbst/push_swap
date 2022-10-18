/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:55:41 by pharbst           #+#    #+#             */
/*   Updated: 2022/10/18 15:27:02 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_pusha(t_stack **stacka, t_stack **stackb, char flag)
{
	t_stack	*node;

	if (!*stackb && flag == 'p')
		return (1);
	if (*stackb)
	{
		node = ft_stackremove_node(stackb, 0);
		*stacka = ft_stackadd_front(*stacka, node);
	}
	if (flag == 'p')
		ft_putstr_fd("pa\n", 1);
	return (0);
}
