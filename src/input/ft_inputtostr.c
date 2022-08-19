/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputtostr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:34:09 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/09 14:34:33 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

char	*ft_inputtostr(int argc, char **argv)
{
	char	*str;
	int		x;

	str = NULL;
	x = 1;
	while (--argc > 0)
	{
		str = ft_strjoinfree(str, argv[x++]);
		if (!str)
			return (NULL);
		str = ft_strjoinfree(str, " ");
		if (!str)
			return (NULL);
	}
	return (str);
}
