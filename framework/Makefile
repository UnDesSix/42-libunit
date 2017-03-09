# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pluu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 13:25:20 by pluu              #+#    #+#              #
#    Updated: 2017/02/14 22:55:08 by pluu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libunit.a

SRCDIR  = ./srcs/
OBJDIR  = ./obj/
INCDIR  = ./inc/

C_FILES	= launch_tests.c \
		  load_test.c \
		  output_test.c \
		  print_header.c \
		  pl_putchar.c \
		  pl_putstr.c \
		  pl_putendl.c \
		  pl_putnbr.c \
		  pl_strdup.c \
		  pl_strlen.c \
		  pl_memdel.c \
		  pl_strcmp.c \
		  pl_strnew.c \
		  pl_bzero.c \
		  pl_memset.c \
		  pl_strcpy.c

O_FILES = $(C_FILES:.c=.o)

SRC		= $(addprefix $(SRCDIR), $(C_FILES))
OBJ     = $(addprefix $(OBJDIR), $(O_FILES))
INC		= -I$(INCDIR)libunit.h

CC		= gcc

C_FLAGS	= -Wall -Wextra -Werror

all: obj $(NAME)

$(NAME):
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj:
	$(CC) $(C_FLAGS) -c $(SRC) -g
	mkdir obj
	mv *.o $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
