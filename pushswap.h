/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:24:40 by pharbst           #+#    #+#             */
/*   Updated: 2022/08/18 17:48:44 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "./libft/libft.h"
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_variables
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	pushtop;
	unsigned int	pushbot;
	unsigned int	pushtotal;
	unsigned int	rot;
	unsigned int	revrot;
	int				chunkid;
	int				chunks;
	int				chunkmembers;
	float			midpoint;
} t_var;

//Input functions

int 	ft_inputcheck(char *format);
int		ft_checknode(t_stack *stack, t_stack *node);
char	*ft_inputtostr(int argc, char **argv);
void	ft_getindex(t_stack **stack);
t_stack	*ft_inputsplit(char *inputstr);
t_stack	*ft_getnode(char *src);
t_stack	*ft_input(int argc, char **argv);

//stackoperations

int		ft_pusha(t_stack **stacka, t_stack **stackb);
int		ft_pushb(t_stack **stacka, t_stack **stackb);
int		ft_revrota(t_stack **stacka);
int		ft_revrotate(t_stack **stack);
int		ft_revrotb(t_stack **stackb);
int		ft_revrotboth(t_stack **stacka, t_stack **stackb);
int		ft_rota(t_stack **stacka);
int		ft_rotate(t_stack **stack);
int		ft_rotb(t_stack **stackb);
int		ft_rotboth(t_stack **stacka, t_stack **stackb);
int		ft_swap(t_stack **stack);
int		ft_swapa(t_stack **stacka);
int		ft_swapb(t_stack **stackb);
int		ft_swapboth(t_stack **stacka, t_stack **stackb);

//tools

int		ft_checksorted(t_stack *stack);
t_var	*ft_initvars(void);
void	ft_locate_chunk(t_stack *stack, t_var **vars);
float	ft_chunk_midpoint(t_stack *stack);
int		ft_chunkmembers(t_stack *stack);

//algorythm

void	ft_subchunk_a(t_stack **stacka, t_stack **stackb, t_var **varsa, t_var **varsb);

#endif