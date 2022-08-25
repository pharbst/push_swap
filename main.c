/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:14:54 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/23 17:07:00 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_var	*varsa;
	t_var	*varsb;

	varsa = ft_initvars();
	varsb = ft_initvars();
	stacka = ft_input(argc, argv);
	if (!stacka)
	{
		write(2, "ERROR!", 6);
	}
	stackb = NULL;
	ft_push_swap(&stacka, &stackb, varsa, varsb);
	return (0);
}
