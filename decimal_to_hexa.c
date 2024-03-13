/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_to_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:57 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/13 20:32:15 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

void decimal_to_hexa(int n)
{
    const char hexa[16] = "0123456789abcdef";
    
    if (n > 15)
    {  
          decimal_to_hexa(n / 16);
    }
        ft_putchar(hexa[n % 16]);
}