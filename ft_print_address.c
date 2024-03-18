/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:56:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/16 16:01:45 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(unsigned long long ptr)
{
	int	count;

	if (!ptr)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	count = 1;
	count = count + ft_decimal_to_hexa((unsigned long long)ptr, 0);
	return (count + 2);
}
