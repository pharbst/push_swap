# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2022/09/22 17:44:52 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

DEPNAME	=	libftio

BNAME	=	checker

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g -I includes -I libft/includes

SRCDIR	=	./src

OBJDIR	=	./obj

BOBJDIR	=	./bobj

FILES	=	t_stack_addend.c\
			t_stack_addfront.c\
			t_stack_delete.c\
			t_stack_delnode.c\
			t_stack_last.c\
			t_stack_len.c\
			t_stack_new.c\
			t_stack_removenode.c\
			t_stack_searchnode.c\
			ft_checknode.c\
			ft_getindex.c\
			ft_getnode.c\
			ft_input.c\
			ft_atoui.c\
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
			main.c

BFILES	=	t_stack_addend.c\
			t_stack_addfront.c\
			t_stack_delete.c\
			t_stack_delnode.c\
			t_stack_last.c\
			t_stack_len.c\
			t_stack_new.c\
			t_stack_removenode.c\
			t_stack_searchnode.c\
			ft_checknode.c\
			ft_getindex.c\
			ft_getnode.c\
			ft_input.c\
			ft_atoui.c\
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
			checker.c

Black			=	\033[0;30m
FBlack			=	\033[1;30m
Red				=	\033[0;31m
FRed			=	\033[1;31m
Green			=	\033[0;32m
FGreen			=	\033[1;32m
Brown/Orange	=	\033[0;33m
FBrown/Orange	=	\033[1;33m
FYellow			=	\033[1;33m
Yellow			=	\033[0;33m
Blue			=	\033[0;34m
FBlue			=	\033[1;34m
Purple			=	\033[0;35m
FPurple			=	\033[1;35m
Cyan			=	\033[0;36m
FCyan			=	\033[1;36m
FWhite			=	\033[1;37m
White			=	\033[0;37m
NC				=	\033[0m

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))

BOBJS	=	$(addprefix $(BOBJDIR)/, $(BFILES:.c=.o))

all:	start $(NAME) end

bonus:	bstart $(BNAME) bend

start:
	@echo "$(FYellow)make push_swap...$(NC)"

bstart:
	@echo "$(FYellow)make checker...$(NC)"

end:
	@echo "$(FGreen)push_swap done$(NC)"

bend:
	@echo "$(Green)checker done$(NC)"

$(NAME):	OSTART $(OBJS) OEND
	@echo "$(FWhite)dependencie $(DEPNAME) needed$(NC)"
	@make -C ./libft
#	@cp libft/libft.a $(NAME)
	@echo "$(FPurple)linking $(DEPNAME) in $(NAME)...$(NC)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -Llibft -lftio

$(BNAME):	BOSTART $(BOBJS) BOEND
	@make -C ./libft
	@$(CC) $(CFLAGS) -o $(BNAME) -Llibft -lftio $(BOBJS)

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c ./includes/push_swap.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf  "$(NC)$@; "

$(BOBJDIR)/%.o:	$(SRCDIR)/*/%.c ./includes/checker.h
	@mkdir -p $(BOBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf "$(NC)$@; "

OSTART:
	@echo "$(Blue)creating object files...$(NC)"
BOSTART:
	@echo "$(Blue)creating object files...$(NC)"

OEND:
	@echo ""
	@echo "$(Green)object files created$(NC)"
BOEND:
	@echo ""
	@echo "$(Green)object files created$(NC)"

clean:
	@make clean -C ./libft
	@echo "$(FRed)make clean pushswap$(Red)"
	rm -rf $(OBJDIR)
	rm -rf $(BOBJDIR)

fclean:
	@make fclean -C ./libft
	@echo "$(FRed)make flcean pushswap$(Red)"
	rm -rf $(OBJDIR)
	rm -rf $(BOBJDIR)
	rm -rf $(NAME)
	rm -rf $(BNAME)
	@printf "$(NC)"

re:	rec fclean all rend

rec:
	@echo "$(FPurple)recompiling...$(NC)"

rend:
	@echo "$(FGreen)recompiled$(NC)"

git:	commit push

commit:
	git commit -m "$(msg)"

push:
	git push -u $(branch)

update:
	git pull

.PHONY:	all bonus clean fclean re OSTART OEND