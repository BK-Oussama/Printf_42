/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:42:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/13 20:27:26 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

/*  Functions   */

void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(char *s);
void    decimal_to_hexa(int n);

#endif