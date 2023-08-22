# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 14:24:08 by pharbst           #+#    #+#              #
#    Updated: 2023/08/22 16:11:01 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Operating System tracking
# **************************************************************************** #
UNAME		=	$(shell uname)
OS			=	$(shell cat /etc/os-release | grep -e NAME | cut -d= -f2 | tr -d '"')
OS_LIKE		=	$(shell cat /etc/os-release | grep ID_LIKE | cut -d= -f2)


include color.mk

# **************************************************************************** #
# Variables
# **************************************************************************** #

NAME	:=	push_swap
BNAME	:=	checker

CC		:=	cc
CFLAGS	:=	-Wextra -Wall -Werror
# CFLAGS	:=	-Wall -Werror -Wextra -Wunreachable-code -g
# CFLAGS	+=	-fsanitize=address

LIBFT	:=	./libft
HEADER	:=	./includes/push_swap.h
LIBS	:=	$(LIBFT)/libftio.a

INC		:=	-I ./includes -I $(LIBFT)/includes
VPATH	:=	src src/algorythm src/stackoperations src/t_stack src/checker src/input src/tools

SRCS	:=	t_stack_addend.c\
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

ODIR	:=	obj
OBJS	:=	$(SRCS:%.c=$(ODIR)/%.o)

# **************************************************************************** #
# Compilation Rules
# **************************************************************************** #

all:
	@$(MAKE) -s proname_header
	@$(MAKE) -s std_all
	
std_all:
ifneq ($($(LIBFT)/Makefile), "")
	@printf "%-67s$(RESET)" "$(Yellow)Updating $(FCyan)submodule ..."
	@git submodule update --init >/dev/null 2>&1
endif
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"
	@printf "%-67s$(RESET)" "$(Yellow)Compiling $(FCyan)libft ..."
	@./spinner.sh $(MAKE) -j -s -C $(LIBFT) >/dev/null
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"
	@printf "%-67s$(RESET)" "$(Yellow)Compiling $(FCyan)$(NAME) ..."	
	@./spinner.sh $(MAKE) -s $(NAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

bonus:
	@$(MAKE) -s proname_header
	@$(MAKE) -s std_bonus

std_bonus:
ifneq ($($(LIBFT)/Makefile), "")
	@printf "%-67s$(RESET)" "$(Yellow)Updating $(FCyan)submodule ..."
	@git submodule update --init >/dev/null 2>&1
endif
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"
	@printf "%-67s$(RESET)" "$(Yellow)Compiling $(FCyan)libft ..."
	@./spinner.sh $(MAKE) -j -s -C $(LIBFT) >/dev/null
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"
	@printf "%-67s$(RESET)" "$(Yellow)Compiling $(FCyan)$(NAME) ..."	
	@./spinner.sh $(MAKE) -s $(NAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"
	@printf "%-67s$(RESET)" "$(Yellow)Compiling $(FCyan)$(BNAME) ..."	
	@./spinner.sh $(MAKE) -s $(BNAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(INC) -o $(NAME)

$(BNAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(INC) -o $(BNAME)

$(ODIR)/%.o: %.c $(HEADER) | $(ODIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(ODIR):
	@mkdir -p $@

libft:
	@$(MAKE) -j -s -C $(LIBFT) $(MAKECMDGOALS) >/dev/null

# **************************************************************************** #
# Cleaning Rules
# **************************************************************************** #

clean:	libft
	@$(MAKE) -s proname_header
	@$(MAKE) -s std_clean

std_clean:
	@printf "%-60s$(RESET)" "$(FPurple)Cleaning up ..."
	@$(RM) -rf $(ODIR)
	@printf "$(FGreen)$(TICKBOX)\n$(RESET)"

fclean:	libft
	@$(MAKE) -s proname_header
	@$(MAKE) -s cleanator

cleanator:
	@printf "%-60s$(RESET)" "$(FPurple)FCleaning up ..."
	@$(RM) -rf $(ODIR)
	@$(RM) -rf $(NAME)
	@printf "$(FGreen)$(TICKBOX)\n$(RESET)"

re:
	@$(MAKE) -s proname_header
	@$(MAKE) -s cleanator
	@$(MAKE) -s std_all

# **************************************************************************** #
# Header Rules                                                                 #
# **************************************************************************** #

proname_header:
	@printf "$(FCyan)╔══════════════════════════════════════════════════════╗$(RESET)\n\
$(FCyan)║$(FPurple)  _____           _        _____                      $(FCyan)║\n\
$(FCyan)║$(FPurple) |  __ \\         | |      / ____|                     $(FCyan)║\n\
$(FCyan)║$(FPurple) | |__) |   _ ___| |__   | (_____      ____ _ _ __    $(FCyan)║\n\
$(FCyan)║$(FPurple) |  ___/ | | / __| \'_ \\   \\___ \\ \\ /\\ / / _\` | \'_ \\   $(FCyan)║\n\
$(FCyan)║$(FPurple) | |   | |_| \\__ \\ | | |  ____) \\ V  V / (_| | |_) |  $(FCyan)║\n\
$(FCyan)║$(FPurple) |_|    \\__,_|___/_| |_| |_____/ \\_/\\_/ \\__,_| .__/   $(FCyan)║\n\
$(FCyan)║$(FPurple)                     ______                  | |      $(FCyan)║\n\
$(FCyan)║$(FPurple)                    |______|                 |_|      $(FCyan)║\n\
$(FCyan)╚══════════════════════════════════════════════════════╝\n$(RESET)"
