/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:12:22 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 12:15:26 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <stdarg.h>
# include "./libft.h"

typedef struct s_stack
{
	int				content;
	size_t			index;
	struct s_stack	*next;
}	t_stack;

t_stack		*ft_input(int argnum, char **args);

#endif