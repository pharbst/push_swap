/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:16:22 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/12 19:41:23 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_getnode(char *src)
{
	size_t	minus;
	long	nbr;

	minus = 0;
	while(*src == '-' || *src == '+')
	{
		if (*src == '-')
			minus++;
		src++;
	}
	nbr = ft_atoui(src);
	if (nbr == -1)
		return (NULL);
	if (minus % 2 == 1 && nbr <= 2147483648)
		nbr *= -1;
	else if (nbr > 2147483647)
		return (NULL);
	return (ft_stack_new(nbr));
}

t_stack	*ft_inputsplit(char *src)
{
	size_t	x;
	t_stack	*stacka;
	t_stack	*node;

	stacka = NULL;
	x = 0;
	while (src[x])
	{
		if (!ft_strchr("\t\v\r \f\n", src[x]))
		{
			node = ft_getnode(src + x);
			if (!node)
				return (free(src), ft_stackdelete(stacka), NULL);
			if (!stacka)
				stacka = node;
			else
				ft_stackadd_end(stacka, node);
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
	if (ft_inputcheck(ret) == 1)
		return (free(ret), NULL);
	else
		return (ft_inputsplit(ret));
}