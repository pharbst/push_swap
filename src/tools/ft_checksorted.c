/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peter <peter@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:35:29 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/17 15:44:57 by peter            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_checksorted(t_stack *stack)
{
	t_stack	*next;
	int		len;

	if (!stack)
		return (0);
	next = stack;
	len = ft_stacklen(stack);
	while (--len)
	{
		if (next->content > next->next->content)
			return (1);
		next = next->next;
	}
	return (0);
}
