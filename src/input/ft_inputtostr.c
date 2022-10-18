/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputtostr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:34:09 by pharbst           #+#    #+#             */
/*   Updated: 2022/10/18 15:35:08 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	*ft_inputtostr(int argc, char **argv)
{
	char	*str;
	int		x;

	str = NULL;
	x = 1;
	while (--argc > 0)
	{
		if (argv[x][0] == '\0')
			return (write(1, "Error\n", 6), NULL);
		str = ft_strjoinfree(str, argv[x++]);
		if (!str)
			return (NULL);
		str = ft_strjoinfree(str, " ");
		if (!str)
			return (NULL);
	}
	return (str);
}
