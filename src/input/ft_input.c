/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:23:42 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/10 11:25:49 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

t_stack	*ft_input(int argc, char **argv)
{
	char	*inputstr;
	t_stack	*stack;

	inputstr = ft_inputtostr(argc, argv);
	if (!inputstr)
		return (NULL);
	if (ft_inputcheck(inputstr) == 1)
		return (free(inputstr), NULL);
	stack = ft_inputsplit(inputstr);
	if (!stack)
		return (free(inputstr), NULL);
	if (ft_checksorted(stack) == 0)
		return (free(inputstr), ft_stackdelete(stack), NULL);
	ft_getindex(&stack);
	return (free(inputstr), stack);
}
