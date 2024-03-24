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


#include <stdio.h>
#include "ft_printf.h"  // Assuming your ft_printf implementation is in ft_printf.h

#include <stdio.h>
#include "ft_printf.h"  // Assuming your ft_printf implementation is in ft_printf.h

int main() {
    char *str = "Hello, world!";
    int num = 42;
    unsigned int un_num = 100;
    char ch = 'A';

    // Test string ("%s") with return value
    int std_ret = printf("Standard printf (string): %s\n", str);
    int ft_ret = ft_printf("ft_printf (string): %s\n", str);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for string test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    // Test integer ("%d") with return value
    std_ret = printf("Standard printf (integer): %d\n", num);
    ft_ret = ft_printf("ft_printf (integer): %d\n", num);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for integer test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    // Test unsigned integer ("%u") with return value
    std_ret = printf("Standard printf (unsigned integer): %u\n", un_num);
    ft_ret = ft_printf("ft_printf (unsigned integer): %u\n", un_num);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for unsigned integer test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    // Test character ("%c") with return value
    std_ret = printf("Standard printf (character): %c\n", ch);
    ft_ret = ft_printf("ft_printf (character): %c\n", ch);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for character test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    // Test percent sign ("%%") with return value
    std_ret = printf("Standard printf (%%): %%\n");
    ft_ret = ft_printf("ft_printf (%%): %%\n");
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for percent sign test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    // Mixed format specifier test
    std_ret = printf("This is a string with a number (%d) and a character (%c).\n", num, ch);
    ft_ret = ft_printf("This is a string with a number (%d) and a character (%c).\n", num, ch);
    if (std_ret != ft_ret) {
        printf("Error: Return values differ for mixed format specifier test (std: %d, ft: %d)\n", std_ret, ft_ret);
    }

    return 0;
}

// int main() {
//     char *str = "Hello, world!";
//     int num = 42;
//     unsigned int un_num = 100;
//     char ch = 'A';

//     // Test string ("%s")
//     printf("Standard printf (string): %s\n", str);
//     ft_printf("ft_printf (string): %s\n", str);

//     // Test integer ("%d")
//     printf("Standard printf (integer): %d\n", num);
//     ft_printf("ft_printf (integer): %d\n", num);

//     // Test unsigned integer ("%u")
//     printf("Standard printf (unsigned integer): %u\n", un_num);
//     ft_printf("ft_printf (unsigned integer): %u\n", un_num);

//     // Test character ("%c")
//     printf("Standard printf (character): %c\n", ch);
//     ft_printf("ft_printf (character): %c\n", ch);

//     // Test percent sign ("%%")
//     printf("Standard printf (%%): %%\n");
//     ft_printf("ft_printf (%%): %%\n");

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
