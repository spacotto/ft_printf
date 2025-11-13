# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:34:48 by spacotto          #+#    #+#              #
#    Updated: 2025/11/12 12:42:01 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= cc
FLAGS	:= -c -Wall -Wextra -Werror

# ============================================================================
# COLORS
# ============================================================================

RESET	:= \033[0m
GRAY	:= \033[0;90m
RED		:= \033[0;91m
GREEN	:= \033[0;92m
YELLOW	:= \033[0;93m
BLUE	:= \033[0;94m
MAGENTA	:= \033[0;95m
CYAN	:= \033[0;96m
WHITE	:= \033[0;97m

# ============================================================================
# COMMANDS
# ============================================================================

AR		:= @/bin/ar rcs
ECHO	:= @echo
MKDIR	:= @/bin/mkdir
RM		:= @/bin/rm -rf

# ============================================================================
# INCLUDES
# ============================================================================

INC		:= -I ./inc/

# ============================================================================
# SOURCES
# ============================================================================

SRCS_DIR:= srcs/

CLIB	:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
			ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_strnstr.c \
			ft_strdup.c ft_calloc.c

FTLIB	:= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_striteri.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCS	:= $(CLIB) $(FTLIB)

SRCS_B	:= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# ============================================================================
# OBJECTS
# ============================================================================

OBJS_DIR:= objs/

OBJS	:= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_B	:= $(addprefix $(OBJS_DIR), $(SRCS_B:.c=.o))	

# ============================================================================
# RULES
# ============================================================================

all:	 		$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)
				$(ECHO) "$(GREEN)Mandatory archive is ready :)$(RESET)"

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(MKDIR) -p $(dir $@)
				$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
				$(CC) $(FLAGS) $(INC) $< -o $@
				$(ECHO) "$(GREEN)$< created $(RESET)"

clean:
				$(RM) $(OBJS_DIR) $(OBJS_B) 
				$(ECHO) "$(RED)Objects removed!$(RESET)"

fclean: 		clean
				$(RM) $(NAME)
				$(ECHO) "$(RED)Archive removed!$(RESET)"

re: 			fclean all
				$(ECHO) "$(BLUE)Cleaned and rebuilt everything :)$(RESET)"

bonus: 			$(NAME) $(OBJS_B) 
				$(AR) $(NAME) $(OBJS_B)
				$(ECHO) "$(GREEN)Bonus archive is ready :)$(RESET)"

.PHONY: all, clean, fclean, re, bonus
