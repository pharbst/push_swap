/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:20:29 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/12 17:09:54 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "./includes/push_swap.h"


int main(int argc, char **argv)
{
	t_stack		*stack;
	t_stack		*node;

	stack = ft_input(argc, argv);
	if (!stack)
	{
		printf("ERROR");
		return (0);
	}
	int len = ft_stacklen(stack);
	node = stack;
	while (len--)
	{
		printf("%d\n", node->content);
		node = node->next;
	}
	//ft_stackdelete(stack);
	system("leaks a.out");
	return 0;
}
