# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pluu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 14:02:50 by pluu              #+#    #+#              #
#    Updated: 2017/02/14 23:08:27 by pluu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	  = tests

FRMWKDIR  = ../framework

OBJDIR	  = ./obj/

STRLENDIR = ./strlen/
STRLENC   = 00_launcher.c \
			01_basic_test.c \
			02_null_test.c \
			03_bigger_str_test.c \
			04_buse_test.c \
			05_ko_test.c

STRLENO   = $(STRLENC:.c=.o)

SRC		  = $(addprefix $(STRLENDIR), $(STRLENC))
OBJ		  = $(addprefix $(OBJDIR), $(STRLENO))
INC		  = -I./test.h

CC		  = gcc

C_FLAGS   = -Wall -Wextra -Werror

FRMWKLIB  = -L../framework/ -lunit

all: frmwk obj $(NAME)

$(NAME):
	$(CC) $(C_FLAGS) main.c $(OBJ) $(INC) -o $(NAME) $(FRMWKLIB) -g

frmwk:
	$(MAKE) -C $(FRMWKDIR)

obj:
	$(CC) $(C_FLAGS) -c $(SRC) -g
	mkdir obj
	mv *.o $(OBJDIR)

test: all
	./tests

clean:
	rm -rf $(OBJDIR)
	$(MAKE) -C $(FRMWKDIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(FRMWKDIR) fclean

re: fclean all


