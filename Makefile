
SRC = ft_printf.c ft_putchar.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(SRC)
	gcc $(FLAGS) $(SRC)
	./a.out

hello : obj
	@echo "Hello world"

obj : src
	@echo $(OBJ)

src : all
	@echo $(SRC)


.PHONY: hello obj src all