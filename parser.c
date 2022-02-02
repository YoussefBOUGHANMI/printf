/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:52:41 by Youssef           #+#    #+#             */
/*   Updated: 2022/02/02 17:58:12 by yboughan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	parm_parser(char c, va_list argptr)
{
	int	add_char;

	add_char = 0;
	if (c == 'c')
		add_char = fonc_char(argptr);
	if (c == 's')
		add_char = fonc_str(argptr);
	if (c == 'p')
		add_char = fonc_pointer(argptr);
	if ((c == 'd') | (c == 'i'))
		add_char = fonc_integer(argptr);
	if (c == 'u')
		add_char = fonc_unsigned(argptr);
	if ((c == 'x') | (c == 'X'))
		add_char = fonc_hexa(argptr, c);
	if (c == '%')
		add_char = fonc_percentage();
	return (add_char);
}
