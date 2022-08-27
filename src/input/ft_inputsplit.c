/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:28:52 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/27 01:55:16 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_inputsplit(char *inputstr)
{
	size_t	x;
	t_stack	*stack;
	t_stack	*node;

	stack = NULL;
	x = 0;
	while (inputstr[x])
	{
		if (!ft_strchr("\t\v\r \f\n", inputstr[x]))
		{
			node = ft_getnode(inputstr + x);
			if (!node)
				return (ft_stackdelete(stack), NULL);
			if (!stack)
				stack = node;
			else if (ft_checknode(stack, node) == 1)
				return (ft_stackdelete(stack), write(2, "ERROR!", 6), NULL);
			while (ft_strchr("-+0123456789", inputstr[x]))
				x++;
		}
		x++;
	}
	return (stack);
}
