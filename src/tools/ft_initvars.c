/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initvars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:44:02 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 11:44:23 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

t_var	*ft_initvars(void)
{
	t_var	*vars;

	vars = malloc(1 * sizeof(t_var));
	vars->chunks = 0;
	vars->x = 0;
	vars->y = 0;
	vars->pushbot = 0;
	vars->pushtop = 0;
	return (vars);
}
