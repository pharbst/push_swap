/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:18:15 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/11 09:57:52 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->content = content;
	new->next = new;
	return (new);
}
