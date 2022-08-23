/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:00:20 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 16:22:42 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_revrotate(t_stack **stack)
{
	t_stack	*last;

	last = ft_stacklast(*stack);
	if (!last)
		return (1);
	*stack = last;
	return (0);
}
