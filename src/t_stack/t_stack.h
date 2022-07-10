/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:53:09 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/10 20:02:23 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK
# define STACK

#include <stdlib.h>

typedef struct s_stack
{
	int				content;
	size_t			index;
	struct s_stack	*next;
}	t_stack;

void	ft_stackadd_front(t_stack **stack, t_stack *newnode);
void	ft_stackdel_node(t_stack *node);
void	ft_stackdel_node(t_stack *node);
t_stack	*ft_stacklast(t_stack *stack);
t_stack	*ft_stack_new(int content);
t_stack	*ft_stackremove_node(t_stack **stack, size_t index);
t_stack	*ft_stacksearch(t_stack *stack, size_t index);

#endif