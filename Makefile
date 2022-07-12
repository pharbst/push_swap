# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 02:06:04 by pharbst           #+#    #+#              #
#    Updated: 2022/07/12 16:38:40 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap.a
CFLAGS	= -Wall -Wextra -Werror -g
CC		= cc

LIBFT	= ./libft
SRCDIR	= ./src
OBJDIR	= ./obj

FILES	=	ft_input.c\
			

OBJ		= 	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))

all:		$(NAME)

$(NAME):	$(OBJ)
	@echo make push_swap
	@make -C $(LIBFT)
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c ./includes/push_swap.h
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