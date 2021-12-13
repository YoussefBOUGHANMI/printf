/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:53:36 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/13 19:08:44 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_isparm(char c)
{
	if ((c == 'c') | (c == 's') | (c == 'p') | (c == 'd')
		| (c == 'i') | (c == 'u') | (c == 'x') | (c == 'X') | (c == '%'))
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		nb_char;

	nb_char = 0;
	va_start(argptr, str);
	while (*str != 0)
	{
		if (*str == '%' && ft_isparm(*(str + 1)))
		{
			nb_char = nb_char + parm_parser(*(str + 1), argptr);
			str = str + 2;
		}
		else if (*str == '%' && ft_isparm(*str + 1) == 0)
			return (-1);
		else
		{
			ft_putchar(*str);
			nb_char++;
			str++;
		}
	}
	va_end(argptr);
	return (nb_char);
}
