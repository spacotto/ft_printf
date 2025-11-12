# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 13:30:48 by spacotto          #+#    #+#              #
#    Updated: 2025/11/12 21:14:44 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a 
LIBFT		:= libft/libft.a
CC			:= cc
FLAGS		:= -c -Wall -Wextra -Werror

# ============================================================================
# COLORS
# ============================================================================

RESET		:= \033[0m
GRAY		:= \033[0;90m
RED			:= \033[0;91m
GREEN		:= \033[0;92m
YELLOW		:= \033[0;93m
BLUE		:= \033[0;94m
MAGENTA		:= \033[0;95m
CYAN		:= \033[0;96m
WHITE		:= \033[0;97m

# ============================================================================
# COMMANDS
# ============================================================================

AR			:= @/bin/ar rcs
CP			:= @/bin/cp
ECHO		:= @echo -e
MAKE		:= @make
MKDIR		:= @/bin/mkdir
RM			:= @/bin/rm -rf

# ============================================================================
# INCLUDES
# ============================================================================

INC			:= -I ./inc/

# ============================================================================
# SOURCES
# ============================================================================

SRCS_DIR	:= srcs/

SRCS		:= ft_printf.c ft_printchar.c ft_printstr.c ft_printptr.c ft_printnbr.c \
				ft_printunb.c ft_printhex.c itoa_base_buffer.c utoa_base_buffer.c

# ============================================================================
# OBJECTS
# ============================================================================

OBJS_DIR	:= objs/

OBJS		:= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

# ============================================================================
# RULES
# ============================================================================

all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE) -C libft
				$(CP) $(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)
				$(ECHO) "$(GREEN)libftprintf.a is ready :)$(RESET)"

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(MKDIR) -p $(dir $@)
				$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
				$(CC) $(FLAGS) $(INC) $< -o $@
				$(ECHO) "$(GREEN)$< created $(RESET)"
clean:
				$(RM) $(OBJS_DIR)
				make clean -C libft
				$(ECHO) "$(RED)Objects removed!$(RESET)"

fclean: 		clean
				$(RM) $(NAME)
				$(RM) $(LIBFT)
				$(ECHO) "$(RED)Archives removed!$(RESET)"

re: 			fclean all
				$(ECHO) "$(BLUE)Cleaned and rebuilt everything :)$(RESET)"

.PHONY: all clean fclean re
