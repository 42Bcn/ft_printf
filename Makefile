
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

NAME = printf.a

SRC = ft_putchar.c ft_putnbr.c ft_printf.c

OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d)

HEADER = printf.h

FLAGS = -Wall -Wextra -Werror -MMD

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

all : $(NAME)

-include $(DEPS)

$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean :
	del /f $(OBJ) $(DEPS)

fclean : clean
	del /f $(NAME)

re : fclean all

.PHONY: all clean fclean re