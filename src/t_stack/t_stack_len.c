/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:33:13 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/08 15:06:03 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_stacklen(t_stack *stack)
{
	t_stack	*stash;
	int		x;

	if (!stack)
		return (0);
	x = 1;
	stash = stack;
	while (stash->next != stack)
	{
		stash = stash->next;
		x++;
	}
	return (x);
}
