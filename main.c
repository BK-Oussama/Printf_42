/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:53:41 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/24 02:08:45 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

// int main() {
//     char *str = "Hello, world!";
//     int num = 42;
//     unsigned int un_num = 100;
//     char ch = 'A';

//     // Test string ("%s") with return value
//     int std_ret = printf("(string): %s\n", str);
//     int ft_ret = ft_printf("(string): %s\n", str);
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for string test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }

//     // Test integer ("%d") with return value
//     std_ret = printf("(integer): %d\n", num);
//     ft_ret = ft_printf("(integer): %d\n", num);
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for integer test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }

//     // Test unsigned integer ("%u") with return value
//     std_ret = printf("(unsigned integer): %u\n", un_num);
//     ft_ret = ft_printf("(unsigned integer): %u\n", un_num);
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for unsigned integer test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }

//     // Test character ("%c") with return value
//     std_ret = printf("(character): %c\n", ch);
//     ft_ret = ft_printf("(character): %c\n", ch);
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for character test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }

//     // Test percent sign ("%%") with return value
//     std_ret = printf("x%");
//     printf("\n");
//     ft_ret = ft_printf("x%");
//     printf("\n");
    
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for percent sign test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }


check this output, erlier on sana's mac on ft_ i got: * instead of A
//     // Mixed format specifier test
//     std_ret = printf("This is a string with a number (%d) and a character (%c).\n", num, ch);
//     ft_ret = ft_printf("This is a string with a number (%d) and a character (%c).\n", num, ch);
//     if (std_ret != ft_ret) {
//         printf("Error: Return values differ for mixed format specifier test (std: %d, ft: %d)\n", std_ret, ft_ret);
//     }

//     return 0;
// }


// int	main(void)
// {
// 	int	x;
// 	int	i;

// 	printf("\n----------------------- Standard Output: ----------------------\n");
// 	x = ft_printf("");
// 	printf("\n");
// 	i = printf("");
// 	printf("\n");
// 	printf("---------------------------------------------------------------\n\n\n");
// 	printf("\n------------------------ Return Values: -----------------------\n");
// 	printf("\nFT_printf return (value:\t%d\n", x));
// 	printf("printf return (value:\t%d\n", i));
// 	printf("\n---------------------------------------------------------------\n\n\n");
// 	return (0);
// }

#include <stdio.h>
#include "ft_printf.h"  // Assuming your ft_printf implementation is in ft_printf.h

int main() {
    char *str = "Hello, world!";
    int num = 42;
    unsigned int un_num = 100;
    char ch = 'A';
    double dbl_num = 3.14159;
    void *ptr = &str;  // Pointer to a string (for %p)

    // Test characters
    int std_ret = printf("%c %c\n", ch, 'B');
    int ft_ret = ft_printf("%c %c\n", ch, 'B');
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for characters (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Characters match\n");
    }

    // Test string ("%s")
    std_ret = printf("%s\n", str);
    ft_ret = ft_printf("%s\n", str);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for string (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Strings match\n");
    }

    // Test pointer ("%p")
    std_ret = printf("%p\n", ptr);
    ft_ret = ft_printf("%p\n", ptr);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for pointer (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Pointers match\n");
    }

    // Test integers ("%d" and "%i")
    std_ret = printf("%d %i\n", num, num);
    ft_ret = ft_printf("%d %i\n", num, num);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for integers (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Integers match\n");
    }

    // Test unsigned integer ("%u")
    std_ret = printf("%u\n", un_num);
    ft_ret = ft_printf("%u\n", un_num);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for unsigned integer (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Unsigned integers match\n");
    }

    // Test hexadecimal ("%x" and "%X")
    std_ret = printf("%x %X\n", num, num);
    ft_ret = ft_printf("%x %X\n", num, num);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for hexadecimal (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Hexadecimal values match\n");
    }

        // Test percent
    std_ret = printf("x%");
    ft_ret = ft_printf("x%");
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for hexadecimal (std: %d, ft: %d)\n", std_ret, ft_ret);
    } else {
        printf("Hexadecimal values match\n");
    }
    return 0;
}
