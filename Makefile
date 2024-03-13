CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCs = ft_putchar.c ft_putnbr.c ft_putstr.c decimal_to_hexa.c

OBJs = ft_putchar.o ft_putnbr.o ft_putstr.o decimal_to_hexa.o

NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OBJs)
	ar rcs $(NAME) $(OBJs)

clean:
	rm -f $(OBJs) $(OBJs)

fclean: clean
	rm -f $(NAME)

re: fclean all