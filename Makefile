# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 16:02:03 by lgirerd           #+#    #+#              #
#    Updated: 2025/01/03 14:33:06 by lgirerd          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror 

SRCS    = arg_checking.c \
		  push_swap.c \
		  stack_utils.c \
		  stack_reverse.c \
		  stack_rotate.c \
		  stack_swap_push.c \
		  sort_minimals.c 

OBJS    = $(SRCS:.c=.o)

# Règle par défaut
all: $(NAME)

# Règle de création de l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Règle générique de compilation des fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour supprimer les fichiers objets
clean:
	rm -f $(OBJS)

# Règle pour supprimer les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Règle pour tout recompiler
re: fclean all

# Déclaration des cibles phony
.PHONY: all clean fclean re
