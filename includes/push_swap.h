/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:24:40 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/17 00:42:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libftio.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_variables
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	pushtop;
	unsigned int	pushbot;
	unsigned int	pushtotal;
	unsigned int	rot;
	unsigned int	revrot;
	unsigned int	stacklen;
	unsigned int	chunkmembers;
	unsigned int	chunkid;
	unsigned int	chunks;
	float			midpoint;
}	t_var;

typedef struct s_stack
{
	int				content;
	unsigned int	chunk;
	size_t			index;
	struct s_stack	*next;
}	t_stack;

//t_stack
void				ft_stackadd_end(t_stack *stack, t_stack *node);
t_stack				*ft_stackadd_front(t_stack *stack, t_stack *newnode);
void				ft_stackdelete(t_stack *stack);
void				ft_stackdel_node(t_stack *node);
t_stack				*ft_stacklast(t_stack *stack);
int					ft_stacklen(t_stack *stack);
t_stack				*ft_stack_new(int content);
t_stack				*ft_stackremove_node(t_stack **stack, size_t index);
t_stack				*ft_stacksearch(t_stack *stack, size_t index);

//Input functions

int					ft_inputcheck(char *format);
int					ft_checknode(t_stack *stack, t_stack *node);
char				*ft_inputtostr(int argc, char **argv);
void				ft_getindex(t_stack **stack);
t_stack				*ft_inputsplit(char *inputstr);
t_stack				*ft_getnode(char *src);
t_stack				*ft_input(int argc, char **argv, char flag);
long long			ft_atoui(const char *src);

//stackoperations

int					ft_pusha(t_stack **stacka, t_stack **stackb, char flag);
int					ft_pushb(t_stack **stacka, t_stack **stackb, char flag);
int					ft_revrota(t_stack **stacka, char flag);
int					ft_revrotate(t_stack **stack);
int					ft_revrotb(t_stack **stackb, char flag);
int					ft_revrotboth(t_stack **stacka, t_stack **stackb,
						char flag);
int					ft_rota(t_stack **stacka, char flag);
int					ft_rotate(t_stack **stack);
int					ft_rotb(t_stack **stackb, char flag);
int					ft_rotboth(t_stack **stacka, t_stack **stackb, char flag);
int					ft_swap(t_stack **stack);
int					ft_swapa(t_stack **stacka, char flag);
int					ft_swapb(t_stack **stackb, char flag);
int					ft_swapboth(t_stack **stacka, t_stack **stackb, char flag);

//tools

int					ft_checksorted(t_stack *stack);
t_var				*ft_initvars(void);
float				ft_chunk_midpoint(t_stack *stack, t_var *vars);
unsigned int		ft_chunkmembers(t_stack *stack, t_var *vars);
void				ft_locate_chunka(t_stack *stacka, t_var *varsa);
void				ft_locate_chunkb(t_stack *stackb, t_var *varsb);

// //debug prints

// void				ft_printstack(t_stack *stack);
// t_stack				*ft_stackcreate_basic(void);
// void				ft_printvars(t_var *varsa);
// void				ft_printall(t_stack *stacka, t_stack *stackb, t_var *varsa,
// 						t_var *varsb);
// void				ft_printstacks(t_stack *stacka, t_stack *stackb);

//algorythm

void				ft_push_swap(t_stack **stacka, t_stack **stackb,
						t_var *varsa, t_var *varsb);
void				ft_subchunk_a(t_stack **stacka, t_stack **stackb,
						t_var *varsa, t_var *varsb);
void				ft_subchunk_b(t_stack **stacka, t_stack **stackb,
						t_var *varsa, t_var *varsb);
void				ft_pushchunk(t_stack **stacka, t_stack **stackb,
						t_var *varsb);
void				ft_sorta(t_stack **stacka, t_var *varsa);
void				ft_sortthree(t_stack **stacka);

#endif
