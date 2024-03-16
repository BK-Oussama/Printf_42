/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:48:36 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 02:32:09 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		count;

	count = 1;
	nbr = n;
	if (n < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
		count++;
	}
	if (nbr > 9)
	{
		count = count + ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
	return (count);
}
