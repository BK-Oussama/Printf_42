/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:53:41 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/28 19:55:15 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int	main(void)
{
	int		ft_rslt;
	int		std_rslt;
	char	*str;

	str = NULL;
	printf("\n----------------------- Standard Output: ----------------------\n");
	ft_rslt = ft_printf("%%%");
	printf("\n");
	std_rslt = printf("%%%");
	printf("\n");
	printf("\n------------------------ Return Values: -----------------------\n");
	if (std_rslt != ft_rslt)
		printf("\nError: Return values do not match\n");
	else
		printf("\nReturn values matches\n");
	printf("STD return Values: %d\nFT_return Value: %d\n", std_rslt, ft_rslt);
	printf("\n---------------------------------------------------------------\n\n\n");
	return (0);
}
