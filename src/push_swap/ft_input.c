/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:16:22 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/11 10:02:01 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_addnode(t_stack *stack, char *src)
{
	size_t	minus;
	int		nbr;
	t_stack	*node;

	minus = 0;
	while(*src == '-' || *src == '+')
	{
		if (*src == '-')
			minus++;
		src++;
	}
	nbr = ft_atoi(src);
	node = ft_stack_new(nbr);
	ft_stackadd_front(&stack, node);
	if (!stack)
		stack = node;
	return (stack);
}

t_stack	*ft_inputsplit(char *src)
{
	size_t	x;
	t_stack	*stacka;

	stacka = NULL;
	x = 0;
	while (src[x])
	{
		if (!ft_strchr("\t\v\r \f\n", src[x]))
		{
			stacka = ft_addnode(stacka, src + x);
			while (ft_strchr("-+0123456789", src[x]))
				x++;
		}
		x++;
	}
	return (free(src), stacka);
}

int ft_inputcheck(char *format)
{
	if (!format)
		return (1);
	while (*format)
	{
		if (!ft_strchr("\t\n\r\f\v -+0123456789", *format))
			return (1);
		format++;
	}
	return (0);
}

t_stack	*ft_input(int argnum, char **args)
{
	int		y;
	char	*ret;

	ret = NULL;
	y = 0;
	while(--argnum > 0)
	{
		ret = ft_strjoinfree(ret, args[y++]);
		if (!ret)
			return (NULL);
		ret = ft_strjoinfree(ret, " ");
		if (!ret)
			return (NULL);
	}
	if (ft_inputcheck(ret) == 1)
		return (free(ret), NULL);
	else
		return (ft_inputsplit(ret));
}