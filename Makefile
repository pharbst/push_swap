# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2022/08/18 15:16:38 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	pushswap.a
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
			ft_locate_chunk.c\
			ft_chunkmembers.c\
			ft_chunk_midpoint.c\
			ft_subchunk_a.c

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))



all:	$(NAME)

$(NAME):	$(OBJS)
	@echo make pushswap
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c ./pushswap.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo make clean pushswap
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean:
	@echo make flcean pushswap
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re