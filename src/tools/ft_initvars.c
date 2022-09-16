/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initvars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:44:02 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:44:17 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_var	*ft_initvars(void)
{
	t_var	*vars;

	vars = malloc(1 * sizeof(t_var));
	vars->x = 0;
	vars->y = 0;
	vars->pushbot = 0;
	vars->pushtop = 0;
	vars->pushtotal = 0;
	vars->rot = 0;
	vars->revrot = 0;
	vars->stacklen = 0;
	vars->chunkmembers = 0;
	vars->chunkid = 0;
	vars->chunks = 0;
	vars->midpoint = 0;
	return (vars);
}
