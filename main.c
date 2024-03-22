/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:53:41 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/22 02:06:08 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int	main(void)
{
	int	x;
	int	i;

	x = ft_printf("%% %%");
	printf("\n");
	i = printf("%% %%");
	printf("\n");
	printf("printf return (value:\t%d\n", i));
	printf("\nFT_printf return (value:\t%d\n", x));
	printf("string lenght:\t%d", ft_strlen(" %% "));
	printf("\n");
	return (0);
}
