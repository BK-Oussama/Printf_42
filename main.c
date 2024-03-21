

#include<stdarg.h>
#include <stddef.h>
#include<stdio.h>
// int  ft_putchar(char c)
// {
//   write(1, &c, 1);
//   return 1;
// }

// int    ft_putstr(char *s)
// {
//     int    i;

//     if (s == NULL)
//     {
//         write(1, "(null)", 6);
//         return (6);
//     }
//     i = 0;
//     while (s[i])
//     {
//         ft_putchar(s[i]);
//         i++;
//     }
//     return (i);
// }


// int	ft_putnbr(int n)
// {
// 	long	nbr;
// 	int		count;

// 	count = 1;
// 	nbr = n;
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		nbr = nbr * -1;
// 		count++;
// 	}
// 	if (nbr > 9)
// 	{
// 		count = count + ft_putnbr(nbr / 10);
// 		ft_putnbr(nbr % 10);
// 	}
// 	else
// 		ft_putchar(nbr + '0');
// 	return (count);
// }



// int    ft_conversion(const char *format, va_list args, int index)
// {
//     int    count;

//     count = 0;
//     if (format[index] == 'c')
//         count = ft_putchar(va_arg(args, int));
//     else if (format[index] == 's')
//         count = ft_putstr(va_arg(args, char *));
//     return (count);
// }

// int    ft_printf(const char *format, ...)
// {
//     va_list    args;
//     int        index;
//     int        n_printed_chars;

//     va_start(args, format);
//     index = 0;
//     n_printed_chars = 0;
//     if (format == NULL || (format[index] == '%' && format[index + 1] == '\0'))
//         return (-1);
//     while (format[index])
//     {
//         if (format[index] == '%')
//         {
//             n_printed_chars = n_printed_chars + ft_conversion(format, args,
//                     (index + 1));
//             index++;
//         }
//         else
//             n_printed_chars = n_printed_chars + ft_putchar(format[index]);
//         index++;
//     }
//     va_end(args);
//     return (n_printed_chars);
// }
#include "ft_printf.h"
int main()
{
    char *s = NULL;

    int x = printf("%s\t%d", s, 1);
    printf("\n");
    int y = ft_printf("%s\t%d", s, 1);
    printf("\n");
    printf("%d", x);
    printf("\n");
    printf("%d", y);
    printf("\n");



    return 0;
}