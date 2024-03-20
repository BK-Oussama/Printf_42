

#include "ft_printf.h"
#include <limits.h>
#include <stdint.h>

int	main()
{
//	int	i;
//	int	x;

	printf("\nprintf return (value: %x\n", 159951);
	printf("\n");
	ft_decimal_to_hexa(159951, 0);
	printf("\n");

	return (0);
}
