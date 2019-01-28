# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:27:01 by tmaselem          #+#    #+#              #
#    Updated: 2018/07/16 16:53:18 by tmaselem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
H_PATH = includes/libft.h
S_PATH = srcs/
E_FLAGS = -Wall -Werror -Wextra
OPT_FLAGS = -c -I $(H_PATH)
SRC = $(S_PATH)ft_putchar.c $(S_PATH)ft_putstr.c $(S_PATH)ft_strlen.c $(S_PATH)ft_putnbr.c\
	  $(S_PATH)ft_isdigit.c $(S_PATH)ft_memset.c $(S_PATH)ft_atoi.c $(S_PATH)ft_memcpy.c   \
	  $(S_PATH)ft_bzero.c $(S_PATH)ft_memccpy.c $(S_PATH)ft_memmove.c $(S_PATH)ft_memchr.c \
	  $(S_PATH)ft_memcmp.c $(S_PATH)ft_strcat.c $(S_PATH)ft_strchr.c $(S_PATH)ft_strcmp.c  \
	  $(S_PATH)ft_strcpy.c $(S_PATH)ft_strncat.c $(S_PATH)ft_strncpy.c $(S_PATH)ft_strdup.c \
	  $(S_PATH)ft_strlcat.c $(S_PATH)ft_strrchr.c $(S_PATH)ft_strstr.c $(S_PATH)ft_strnstr.c \
	  $(S_PATH)ft_strncmp.c $(S_PATH)ft_isalpha.c $(S_PATH)ft_isalnum.c $(S_PATH)ft_isascii.c\
	  $(S_PATH)ft_isprint.c $(S_PATH)ft_toupper.c $(S_PATH)ft_tolower.c $(S_PATH)ft_memalloc.c\
	  $(S_PATH)ft_memdel.c $(S_PATH)ft_strnew.c $(S_PATH)ft_strdel.c $(S_PATH)ft_strclr.c	  \
	  $(S_PATH)ft_striter.c $(S_PATH)ft_striteri.c $(S_PATH)ft_strmap.c $(S_PATH)ft_strmapi.c  \
	  $(S_PATH)ft_strequ.c $(S_PATH)ft_strnequ.c $(S_PATH)ft_strsub.c $(S_PATH)ft_strjoin.c \
	  $(S_PATH)ft_iswhitespace.c $(S_PATH)ft_strtrim.c $(S_PATH)ft_itoa.c $(S_PATH)ft_strsplit.c\
	  $(S_PATH)ft_putendl.c $(S_PATH)ft_putchar_fd.c $(S_PATH)ft_putstr_fd.c $(S_PATH)ft_putendl_fd.c\
	  $(S_PATH)ft_putnbr_fd.c $(S_PATH)get_next_line.c $(S_PATH)ft_lstnew.c  $(S_PATH)ft_lstdelone.c\
	  $(S_PATH)ft_lstdel.c $(S_PATH)ft_lstadd.c $(S_PATH)ft_lstiter.c $(S_PATH)ft_lstmap.c\

OBJ = $(SRC:$(S_PATH)%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(E_FLAGS) $(OPT_FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
