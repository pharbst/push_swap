/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:14:54 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/19 15:11:01 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_var	*varsa;
	t_var	*varsb;

	if (argc < 2)
		return (0);
	varsa = ft_initvars();
	varsb = ft_initvars();
	stacka = ft_input(argc, argv, 'p');
	if (!stacka)
		return (free(varsa), free(varsb), 0);
	stackb = NULL;
	ft_push_swap(&stacka, &stackb, varsa, varsb);
	return (free(varsa), free(varsb), 0);
}
