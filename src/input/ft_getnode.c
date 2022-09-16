/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:29:37 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 14:24:25 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_getnode(char *src)
{
	size_t	minus;
	long	nbr;
	t_stack	*node;

	minus = 0;
	while (*src == '-' || *src == '+')
	{
		if (*src == '-')
			minus++;
		src++;
	}
	nbr = ft_atoui(src);
	if (nbr == -1)
		return (write(2, "ERROR!", 6), NULL);
	if (minus % 2 == 1 && nbr <= 2147483648)
		nbr *= -1;
	else if (nbr > 2147483647 || nbr < -2147483648)
		return (write(2, "ERROR!", 6), NULL);
	node = ft_stack_new((int)nbr);
	return (node);
}
