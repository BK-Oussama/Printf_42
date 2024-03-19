/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:56:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/19 02:21:02 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(unsigned long ptr)
{
	int	count;

	if (!ptr)
	{
		ft_putstr("0x0");
		return (3);
	}
	count = ft_putstr("0x");
	count = count + ft_decimal_to_hexa((unsigned long long)ptr);
	return (count);
}
