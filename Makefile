CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCs = ft_conversion.c ft_decimal_to_hexa.c ft_decimal_to_hexa_upper.c ft_print_address.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_put_unsigned_nbr.c

OBJs = ft_conversion.o ft_decimal_to_hexa.o ft_decimal_to_hexa_upper.o ft_print_address.o ft_printf.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_put_unsigned_nbr.o

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJs)
	ar rcs $(NAME) $(OBJs)

clean: 
	rm -f $(OBJs) $(OBJs)

fclean: clean
	rm -f $(NAME)

re: fclean all
