/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:28:56 by pharbst           #+#    #+#             */
/*   Updated: 2022/10/18 14:10:37 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static int	ft_check(t_stack **stacka, t_stack **stackb, char *op)
{
	if (ft_strncmp("sa\n", op, 3) == 0)
		return (ft_swapa(stacka, 0));
	if (ft_strncmp("sb\n", op, 3) == 0)
		return (ft_swapb(stackb, 0));
	if (ft_strncmp("ss\n", op, 3) == 0)
		return (ft_swapboth(stacka, stackb, 0));
	if (ft_strncmp("ra\n", op, 3) == 0)
		return (ft_rota(stacka, 0));
	if (ft_strncmp("rb\n", op, 3) == 0)
		return (ft_rotb(stackb, 0));
	if (ft_strncmp("rr\n", op, 3) == 0)
		return (ft_rotboth(stacka, stackb, 0));
	if (ft_strncmp("rra\n", op, 4) == 0)
		return (ft_revrota(stacka, 0));
	if (ft_strncmp("rrb\n", op, 4) == 0)
		return (ft_revrotb(stackb, 0));
	if (ft_strncmp("rrr\n", op, 4) == 0)
		return (ft_revrotboth(stacka, stackb, 0));
	if (ft_strncmp("pa\n", op, 3) == 0)
		return (ft_pusha(stacka, stackb, 0));
	if (ft_strncmp("pb\n", op, 3) == 0)
		return (ft_pushb(stacka, stackb, 0));
	write (2, "Error\n", 6);
	return (1);
}

static int	ft_checker_mac(t_stack **stacka, t_stack **stackb)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		if (ft_check(stacka, stackb, op) == 1)
			return (free(op), 1);
		free(op);
		op = get_next_line(0);
	}
	return (free(op), 0);
}

int	main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	stacka = ft_input(argc, argv, 0);
	if (!stacka)
		return (0);
	stackb = NULL;
	if (ft_checker_mac(&stacka, &stackb) == 1)
		return (0);
	if (ft_checksorted(stacka) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (stacka)
		ft_stackdelete(stacka);
	if (stackb)
		ft_stackdelete(stackb);
	return (0);
}
