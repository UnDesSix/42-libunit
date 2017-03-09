# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pluu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 15:06:24 by pluu              #+#    #+#              #
#    Updated: 2017/02/14 23:09:07 by pluu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= realtests

LIBFTDIR 	= ../libft
FRMWKDIR	= ../framework

OBJDIR		= ./obj/

STRLENDIR	= ./strlen/
STRLENSRC	= 00_strlen_launcher.c \
			  01_strlen_basic_test.c \
			  02_strlen_null_test.c \
			  03_strlen_buse_test.c

STRDUPDIR	= ./strdup/
STRDUPSRC	= 00_strdup_launcher.c \
			  01_strdup_basic_test.c \
			  02_strdup_null_test.c \
			  03_strdup_buse_test.c

STRCPYDIR	= ./strcpy/
STRCPYSRC	= 00_strcpy_launcher.c \
			  01_strcpy_basic_test.c \
			  02_strcpy_null_test.c \
			  03_strcpy_buse_test.c

STRCATDIR	= ./strcat/
STRCATSRC	= 00_strcat_launcher.c \
			  01_strcat_basic_test.c \
			  02_strcat_null_test.c \
			  03_strcat_buse_test.c

STRCMPDIR	= ./strcmp/
STRCMPSRC	= 00_strcmp_launcher.c \
			  01_strcmp_basic_test.c \
			  02_strcmp_null_test.c \
			  03_strcmp_buse_test.c

STRNCPYDIR	= ./strncpy/
STRNCPYSRC	= 00_strncpy_launcher.c \
			  01_strncpy_basic_test.c \
			  02_strncpy_null_test.c \
			  03_strncpy_buse_test.c

STRNCATDIR	= ./strncat/
STRNCATSRC	= 00_strncat_launcher.c \
			  01_strncat_basic_test.c \
			  02_strncat_null_test.c \
			  03_strncat_buse_test.c

STRNCMPDIR	= ./strncmp/
STRNCMPSRC	= 00_strncmp_launcher.c \
			  01_strncmp_basic_test.c \
			  02_strncmp_null_test.c \
			  03_strncmp_buse_test.c

STRLCATDIR	= ./strlcat/
STRLCATSRC	= 00_strlcat_launcher.c \
			  01_strlcat_basic_test.c \
			  02_strlcat_null_test.c \
			  03_strlcat_buse_test.c

STRCHRDIR	= ./strchr/
STRCHRSRC	= 00_strchr_launcher.c \
			  01_strchr_basic_test.c \
			  02_strchr_null_test.c \
			  03_strchr_buse_test.c

STRRCHRDIR	= ./strrchr/
STRRCHRSRC	= 00_strrchr_launcher.c \
			  01_strrchr_basic_test.c \
			  02_strrchr_null_test.c \
			  03_strrchr_buse_test.c

STRSTRDIR	= ./strstr/
STRSTRSRC	= 00_strstr_launcher.c \
			  01_strstr_basic_test.c \
			  02_strstr_null_test.c \
			  03_strstr_buse_test.c

STRNSTRDIR	= ./strnstr/
STRNSTRSRC	= 00_strnstr_launcher.c \
			  01_strnstr_basic_test.c \
			  02_strnstr_null_test.c \
			  03_strnstr_buse_test.c

ISALPHADIR	= ./isalpha/
ISALPHASRC	= 00_isalpha_launcher.c \
			  01_isalpha_basic_test.c

ISDIGITDIR	= ./isdigit/
ISDIGITSRC	= 00_isdigit_launcher.c \
			  01_isdigit_basic_test.c

STRLENOBJ	= $(STRLENSRC:.c=.o)
STRDUPOBJ	= $(STRDUPSRC:.c=.o)
STRCPYOBJ	= $(STRCPYSRC:.c=.o)
STRCATOBJ	= $(STRCATSRC:.c=.o)
STRCMPOBJ	= $(STRCMPSRC:.c=.o)
STRNCPYOBJ	= $(STRNCPYSRC:.c=.o)
STRNCATOBJ	= $(STRNCATSRC:.c=.o)
STRNCMPOBJ	= $(STRNCMPSRC:.c=.o)
STRLCATOBJ	= $(STRLCATSRC:.c=.o)
STRCHROBJ	= $(STRCHRSRC:.c=.o)
STRRCHROBJ	= $(STRRCHRSRC:.c=.o)
STRSTROBJ	= $(STRSTRSRC:.c=.o)
STRNSTROBJ	= $(STRNSTRSRC:.c=.o)
ISALPHAOBJ	= $(ISALPHASRC:.c=.o)
ISDIGITOBJ	= $(ISDIGITSRC:.c=.o)

SRC			=
SRC			+= $(addprefix $(STRLENDIR), $(STRLENSRC))
SRC			+= $(addprefix $(STRDUPDIR), $(STRDUPSRC))
SRC			+= $(addprefix $(STRCPYDIR), $(STRCPYSRC))
SRC			+= $(addprefix $(STRCATDIR), $(STRCATSRC))
SRC			+= $(addprefix $(STRCMPDIR), $(STRCMPSRC))
SRC			+= $(addprefix $(STRNCPYDIR), $(STRNCPYSRC))
SRC			+= $(addprefix $(STRNCATDIR), $(STRNCATSRC))
SRC			+= $(addprefix $(STRNCMPDIR), $(STRNCMPSRC))
SRC			+= $(addprefix $(STRLCATDIR), $(STRLCATSRC))
SRC			+= $(addprefix $(STRCHRDIR), $(STRCHRSRC))
SRC			+= $(addprefix $(STRRCHRDIR), $(STRRCHRSRC))
SRC			+= $(addprefix $(STRSTRDIR), $(STRSTRSRC))
SRC			+= $(addprefix $(STRNSTRDIR), $(STRNSTRSRC))
SRC			+= $(addprefix $(ISALPHADIR), $(ISALPHASRC))
SRC			+= $(addprefix $(ISDIGITDIR), $(ISDIGITSRC))

OBJ			=
OBJ			+= $(addprefix $(OBJDIR), $(STRLENOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRDUPOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRCPYOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRCATOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRCMPOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRNCPYOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRNCATOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRNCMPOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRLCATOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRCHROBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRRCHROBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRSTROBJ))
OBJ			+= $(addprefix $(OBJDIR), $(STRNSTROBJ))
OBJ			+= $(addprefix $(OBJDIR), $(ISALPHAOBJ))
OBJ			+= $(addprefix $(OBJDIR), $(ISDIGITOBJ))

INC			= -I./real_test.h

CC			= gcc

C_FLAGS		= -Wall -Wextra -Werror

LIBFTLIB	= -L../libft -lft
FRMWKLIB	= -L../framework -lunit

all: libft frmwk obj $(NAME)

$(NAME):
	$(CC) $(C_FLAGS) main.c $(OBJ) $(INC) -o $(NAME) $(FRMWKLIB) $(LIBFTLIB) -g

frmwk:
	$(MAKE) -C $(FRMWKDIR)

libft:
	$(MAKE) -C $(LIBFTDIR)

obj:
	$(CC) $(C_FLAGS) -c $(SRC) -g
	mkdir obj
	mv *.o $(OBJDIR)

realtest: all
	./realtests

clean:
	rm -rf $(OBJDIR)
	$(MAKE) -C $(FRMWKDIR) clean
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(FRMWKDIR) fclean
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all
