# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 13:30:48 by spacotto          #+#    #+#              #
#    Updated: 2025/11/10 10:17:32 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
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
ECHO		:= @echo
MKDIR		:= @/bin/mkdir
RM			:= @/bin/rm -rf

# ============================================================================
# INCLUDES
# ============================================================================

INC			:= -I ../inc/

# ============================================================================
# SOURCES
# ============================================================================

SRCS_DIR	:= srcs/

SRC_IS		:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

SRC_STR		:= ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
			   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
			   ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_strmapi.c ft_striteri.c

SRC_MEM		:= ft_memset.c ft_bzero.c ft_memcpy.c \
			   ft_memmove.c ft_memchr.c ft_memcmp.c

SRC_CONV	:= ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c ft_utoa_base.c 

SRC_ALLOC	:= ft_calloc.c

SRC_FD		:= ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_LSTS	:= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# ============================================================================
# OBJECTS
# ============================================================================

OBJS_DIR	:= objs

OBJS_IS		:= $(addprefix $(OBJS_DIR)/checks/, $(SRC_IS:.c=.o))
OBJS_STR	:= $(addprefix $(OBJS_DIR)/strs/, $(SRC_STR:.c=.o))
OBJS_MEM	:= $(addprefix $(OBJS_DIR)/mem/, $(SRC_MEM:.c=.o))
OBJS_CONV	:= $(addprefix $(OBJS_DIR)/convs/, $(SRC_CONV:.c=.o))
OBJS_ALLOC	:= $(addprefix $(OBJS_DIR)/alloc/, $(SRC_ALLOC:.c=.o))
OBJS_FD		:= $(addprefix $(OBJS_DIR)/fd/, $(SRC_FD:.c=.o))
OBJS_LSTS	:= $(addprefix $(OBJS_DIR)/lists/, $(SRC_LSTS:.c=.o))

OBJS		:= $(OBJS_IS) $(OBJS_STR) $(OBJS_MEM) $(OBJS_CONV) \
			   $(OBJS_ALLOC) $(OBJS_FD) $(OBJS_LSTS)

# ============================================================================
# RULES
# ============================================================================

all:					$(NAME)

$(NAME):				$(OBJS)
						$(AR) $(NAME) $(OBJS)
						$(ECHO) "$(GREEN)libft.a is ready :)$(RESET)"

$(OBJS_DIR)/checks/%.o:	$(SRCS_DIR)checks/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/strs/%.o:	$(SRCS_DIR)strings/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/mem/%.o:	$(SRCS_DIR)memory/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/convs/%.o:	$(SRCS_DIR)conversions/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/alloc/%.o:	$(SRCS_DIR)alloc/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/fd/%.o:		$(SRCS_DIR)fd/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

$(OBJS_DIR)/lists/%.o:	$(SRCS_DIR)lists/%.c
						$(MKDIR) -p $(dir $@)
						$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
						$(CC) $(FLAGS) $(INC) $< -o $@
						$(ECHO) "$(GREEN)$< created $(RESET)"

clean:
						$(RM) $(OBJS_DIR)
						$(ECHO) "$(RED)Objects removed!$(RESET)"

fclean: 				clean
						$(RM) $(NAME)
						$(ECHO) "$(RED)libft.a removed!$(RESET)"

re: 					fclean all
						$(ECHO) "$(BLUE)Cleaned and rebuilt everything :)$(RESET)"

.PHONY: all clean fclean re
