/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 02:29:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 12:08:10 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
#include "../libft/libft.h"

char	**ft_inputsplit(char *src)
{
	size_t	x;

	x = 0;
	while (src[x])
	{

	}
}

char **ft_input(int argnum, char **args)
{
	int		y;
	char	*ret;

	ret = NULL;
	y = 1;
	while(--argnum > 0)
	{
		ret = ft_strjoinfree(ret, args[y++]);
		ret = ft_strjoinfree(ret, " ");
	}
	if (ft_inputcheck(ret) == 1)
		return (free(ret), NULL);
	else
		return (ft_inputsplit(ret));
}

int main(int argc, char **args)
{

	if (argc == 1)
		return (0);
	else if (argc > 1)
	{
		if ()
	}
	// if (!ft_check_input)
	// 	return (ft_printf("ERROR!"));
	// put_input_together
	// split input
	// if (!ft_check_input)
	// 	return (printf("ERROR!"));
	// count elements
	// idex elements
	// init stacks
	// while (!checksorted)
	// 	midpoint algo
	
}
