# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fself <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 15:16:13 by fself             #+#    #+#              #
#    Updated: 2019/09/18 18:43:57 by fself            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_putchar.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	 ft_bzero.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	 ft_strncat.c ft_strchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	 ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar_fd.c ft_putstr.c \
	 ft_putstr_fd.c ft_memccpy.c ft_memmove.c ft_strdup.c

OBJECTS=ft_putchar.o ft_memset.o ft_memcpy.o ft_memchr.o ft_memcmp.o \
		ft_bzero.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		ft_strncat.o ft_strchr.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
		ft_isprint.o ft_toupper.o ft_tolower.o ft_putchar_fd.o \
		ft_putstr.o ft_putstr_fd.o ft_memccpy.o ft_memmove.o ft_strdup.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
