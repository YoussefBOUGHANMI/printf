/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:52:41 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/11 17:41:10 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	parm_parser(char c, va_list argptr)
{
	int	add_char;

	if (c == 'c')
		add_char = fonc_char(argptr);
	else if (c == 's')
		add_char = fonc_str(argptr);
	else if (c == 'p')
		add_char = fonc_pointer(argptr);
	else if ((c == 'd') | (c == 'i'))
		add_char = fonc_integer(argptr);
	else if (c == 'u')
		add_char = fonc_unsigned(argptr);
	else if ((c == 'x') | (c == 'X'))
		add_char = fonc_hexa(argptr, c);
	else if (c == '%')
		add_char = fonc_percentage();
	return (add_char);
}
