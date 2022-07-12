/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:16:22 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/12 17:03:37 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_addnode(t_stack *stack, char *src)
{
	size_t	minus;
	int		nbr;
	t_stack	*node;

	minus = 0;
	printf("test addnode start\n");
	while(*src == '-' || *src == '+')
	{
		if (*src == '-')
			minus++;
		src++;
	}
	nbr = ft_atoi(src);
	node = ft_stack_new(nbr);
	printf("%p, x%ix\n", node, node->content);
	stack = ft_stackadd_front(stack, node);
	printf("test addnode end\n");
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
		printf("test while2\n");
		printf("%c\n", src[x]);
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
	printf("test2\n");
	printf("%s\n", format);
	if (!format)
		return (1);
	printf("test3\n");
	printf("%s\n", format);
	while (*format)
	{
		printf("test while\n");
		printf("%c\n", *format);
		if (!ft_strchr("\t\n\r\f\v -+0123456789", *format))
			return (1);
		format++;
	}
	printf("test4\n");
	return (0);
}

t_stack	*ft_input(int argnum, char **args)
{
	int		y;
	char	*ret;

	ret = NULL;
	y = 1;
	while(--argnum > 0)
	{
		ret = ft_strjoinfree(ret, args[y++]);
		if (!ret)
			return (NULL);
		ret = ft_strjoinfree(ret, " ");
		if (!ret)
			return (NULL);
	}
	printf("test1\n");
	printf("%s\n", ret);
	if (ft_inputcheck(ret) == 1)
		return (free(ret), NULL);
	else
		return (ft_inputsplit(ret));
}