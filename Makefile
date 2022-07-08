# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 02:06:04 by pharbst           #+#    #+#              #
#    Updated: 2022/07/08 02:11:39 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CFLAGS	= -Wall -Wextra -Werror -g
CC		= cc

LIBFT	= ./libft
SRCDIR	= ./src
OBJDIR	= ./obj

FILES	=	push_swap.c\
			

OBJ		= 	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))

all:		$(NAME)

$(NAME):	$(OBJ)
	@echo make ft_printf
	@make -C $(LIBFT)
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c ./ft_printf.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo make clean ft_printf
	@rm -rf $(OBJ)
	rm -rf $(OBJDIR)
	@make clean -C$(LIBFT)

fclean:
	@echo make fclean ft_printf
	@rm -rf $(OBJ)
	rm -rf $(OBJDIR)
	rm -f $(NAME)
	rm -f a.out
	@make fclean -C $(LIBFT)

re:			fclean all

.PHONY: 	clean fclean all re