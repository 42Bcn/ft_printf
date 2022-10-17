# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 09:22:54 by cvelasco          #+#    #+#              #
#    Updated: 2022/10/13 08:29:13 by cvelasco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c \
	  ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	  ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d)

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror -MMD

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

all : $(NAME)

-include $(DEPS)

$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) $(DEPS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
