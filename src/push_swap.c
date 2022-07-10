/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 02:29:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 16:15:52 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
#include "../libft/libft.h"
#include "../includes/push_swap.h"

int main(int argc, char **args)
{
	t_stack	*stacka;
	if (argc == 1)
		return (0);
	else if (argc > 1)
	{
		stacka = ft_input(argc, args);
		if (!stacka)
			return (ft_printf("ERROR!"));
		
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
