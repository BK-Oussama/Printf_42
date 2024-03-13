/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:48:36 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/12 17:59:57 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_printf.h"

void    ft_putnbr(int n)
{
    long nbr;
    
    nbr = n;
    if (n < 0)
    {
        ft_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    ft_putchar(nbr + '0');
}
