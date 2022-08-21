/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:14:54 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/21 16:08:02 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ft_printstack(t_stack *stack)
{
	size_t	len;
	size_t	x;

	if (!stack)
		return ;
	x = 0;
	len = ft_stacklen(stack);
	while (len--)
	{
		printf("stack index = %4zu|| stack content = %12d|| index:%4zu|| chunkid:%5d|| address:%p|| next:%p\n", x, stack->content, stack->index,stack->chunk, stack, stack->next);
		x++;
		stack = stack->next;
	}
	printf("\n\n");
	return ;
}

t_stack	*ft_stackcreate_basic()
{
	t_stack	*stack;
	t_stack	*node;

	stack = ft_stack_new(42);
	node = ft_stack_new(INT_MAX);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(INT_MIN);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(-2147483647);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(666);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(1);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(0);
	ft_stackadd_end(stack, node);
	node = ft_stack_new(28356968);
	ft_stackadd_end(stack, node);
	return (stack);
}

void	ft_printvars(t_var *varsa)
{
	printf("x = %u|| y = %u|| chunkid = %5u|| pushtop = %3u|| pushbot = %3u|| pushtotal = %3u|| rot = %3u|| revrot = %3u|| chunks = %5d|| chunkmembers = %d|| midpoint = %f", varsa->x, varsa->y, varsa->chunkid, varsa->pushtop, varsa->pushbot, varsa->pushtotal, varsa->rot, varsa->revrot, varsa->chunks, varsa->chunkmembers, varsa->midpoint);
	printf("\n\n");
}

void	ft_printall(t_stack *stacka, t_stack *stackb, t_var *varsa, t_var *varsb)
{
	printf("\33[0;31m###############################################################################################################################\033[0;37m\n");
	ft_printstack(stacka);
	ft_printstack(stackb);
	ft_printvars(varsa);
	ft_printvars(varsb);
	printf("\33[0;31m_________________________________________________________________________________________________________________________________________\033[0;37m\n\n\n");
}


// void	ft_subchunk(t_stack **stacka, t_stack **stackb, t_var *varsa)
// {
// 	while (ft_chunkmembers(stacka) > 3)
// 	{
// 		if (ft_checksorted(stacka) == 1)
// 		{
// 			ft_locate_chunk(stacka, &varsa);
// 			varsa->chunks++;
// 			while (varsa->pushtotal != 0)
// 			{
// 				if (stacka->index < varsa->midpoint)
// 				{
// 					stacka->chunk = varsa->chunks;
// 					ft_pushb(&stacka, &stackb);
// 					varsa->pushtotal--;
// 				}
// 				else
// 					ft_rota(&stacka);
// 			}
// 		}
// 	}
// }



int main(int argc, char **argv)
{
	int		counter = 3;			//testing purpose
	
	t_stack	*stacka;
	t_stack	*stackb;
	t_var	*varsa;
	t_var	*varsb;

	varsa = ft_initvars();
	varsb = ft_initvars();
	stackb = NULL;
	stacka = ft_input(argc, argv);
	
	while (ft_checksorted(stacka) == 1 || ft_stacklen(stackb) != 0 || counter-- != 0)
	{
		ft_locate_chunk(stacka, &varsa);
		ft_locate_chunk(stackb, &varsb);

		ft_printall(stacka, stackb, varsa, varsb);
		
		if (ft_checksorted(stacka) == 1)
		{
			if (varsa->chunkmembers == 3 && varsa->chunkid == 0)
			{
				// ft_sort_three(&stacka);
				if (stacka->index > stacka->next->index && stacka->index > stacka->next->next->index)
					ft_rota(&stacka);
				if (stacka->index < stacka->next->index && stacka->next->index > stacka->next->next->index)
					ft_revrota(&stacka);
				if (stacka->index > stacka->next->index)
					ft_swapa(&stacka);
			}
			else if (varsa->chunkmembers >= 3)
			{
				varsa->chunks++;
				varsb->chunks = varsa->chunks;
				while (varsa->pushtotal != 0)
				{
					if (stacka->index < varsa->midpoint)
					{
						stacka->chunk = varsa->chunks;
						ft_pushb(&stacka, &stackb);
						varsa->pushtotal--;
					}
					else
						ft_rota(&stacka);
				}
			}
			else
				ft_swapa(&stacka);
		}
		else
		{
			ft_locate_chunk(stackb, &varsb);
			varsb->chunks++;
			varsa->chunks = varsb->chunks;
			while (varsb->pushtotal != 0)
			{
				if (stackb->index > varsb->midpoint)
				{
					stackb->chunk = varsb->chunks;
					ft_pusha(&stacka, &stackb);
					varsb->pushtotal--;
				}
				else
					ft_rotb(&stackb);
			}
		}
	}
	ft_printall(stacka, stackb, varsa, varsb);
	ft_stackdelete(stacka);
	ft_stackdelete(stackb);
	return (0);
}
