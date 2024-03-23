/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:53:41 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/23 00:14:41 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int	main(void)
{
	int	x;
	int	i;
	printf("\n----------------------- Standard Output: ----------------------\n");

	x = ft_printf("");
	printf("\n");
	
	i = printf("");
	printf("\n");
	
	printf("---------------------------------------------------------------\n\n\n");


	printf("\n------------------------ Return Values: -----------------------\n");
	printf("\nFT_printf return value:\t%d\n", x);
	printf("printf return value:\t%d\n", i);	
	printf("\n---------------------------------------------------------------\n\n\n");

	
	return (0);
}

