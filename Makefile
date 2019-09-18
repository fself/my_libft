# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fself <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 15:16:13 by fself             #+#    #+#              #
#    Updated: 2019/09/18 16:29:25 by fself            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_putchar.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	 ft_bzero.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	 ft_strncat.c

OBJECTS=ft_putchar.o ft_memset.o ft_memcpy.o ft_memchr.o ft_memcmp.o \
		ft_bzero.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		ft_strncat.o

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
