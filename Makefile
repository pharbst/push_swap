# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2022/08/27 02:25:55 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g

SRCDIR	=	./src

OBJDIR	=	./obj

FILES	=	ft_checknode.c\
			ft_getindex.c\
			ft_getnode.c\
			ft_input.c\
			ft_inputcheck.c\
			ft_inputsplit.c\
			ft_inputtostr.c\
			ft_pusha.c\
			ft_pushb.c\
			ft_revrotate.c\
			ft_revrota.c\
			ft_revrotb.c\
			ft_revrotboth.c\
			ft_rotate.c\
			ft_rota.c\
			ft_rotb.c\
			ft_rotboth.c\
			ft_swap.c\
			ft_swapa.c\
			ft_swapb.c\
			ft_swapboth.c\
			ft_checksorted.c\
			ft_initvars.c\
			ft_locate_chunka.c\
			ft_locate_chunkb.c\
			ft_chunkmembers.c\
			ft_chunk_midpoint.c\
			ft_subchunka.c\
			ft_subchunkb.c\
			ft_push_swap.c\
			ft_pushchunk.c\
			ft_sorta.c\
			ft_sortthree.c\
			test.c

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))



all:	$(NAME)

$(NAME):	$(OBJS)
	@make -C ./libft
	@echo make pushswap
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)
#	gcc -g main.c push_swap.a > push_swap

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c ./push_swap.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo make clean pushswap
	@make clean -C ./libft
	rm -rf $(OBJDIR)

fclean:
	@make fclean -C ./libft
	@echo make flcean pushswap
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re