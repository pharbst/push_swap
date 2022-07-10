/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:16:22 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 12:16:28 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_inputsplit(char *src)
{
	
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
		ret = ft_strjoinfree(ret, " ");
	}
	if (ft_inputcheck(ret) == 1)
		return (NULL);
	else
		return (ft_inputsplit(ret));
}