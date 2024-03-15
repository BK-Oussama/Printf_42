CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCs = ft_conversion.cft_decimal_to_hexa.cft_print_address.cft_printf.cft_putchar.cft_putnbr.cft_putstr.cft_put_unsigned_nbr.c

OBJs = ft_conversion.oft_decimal_to_hexa.oft_print_address.oft_printf.oft_putchar.oft_putnbr.oft_putstr.oft_put_unsigned_nbr.o

NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OBJs)
	ar rcs $(NAME) $(OBJs)

clean:
	rm -f $(OBJs) $(OBJs)

fclean: clean
	rm -f $(NAME)

re: fclean all