/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:37 by peter             #+#    #+#             */
/*   Updated: 2022/04/18 19:08:55 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoui(const char *src)
{
	long long	ret;
	int			digit;

	ret = 0;
	if (!ft_isdigit(*src))
		return (-1);
	while (ft_isdigit(*src))
	{
		digit = *src - '0';
		ret = (10 * ret) + digit;
		src++;
	}
	return (ret);
}
