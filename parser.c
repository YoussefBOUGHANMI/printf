/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:52:41 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 19:04:11 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	*parm_parser(char c, char *dst, va_list argptr)
{
	char	*tmp_dst;

	if (c == 'c')
		tmp_dst = fonc_char(dst, argptr);
	else if (c == 's')
		tmp_dst = fonc_str(dst, argptr);
	else if (c == 'p')
		tmp_dst = fonc_pointer(dst, argptr);
	else if ((c == 'd') | (c == 'i'))
		tmp_dst = fonc_integer(dst, argptr);
	else if (c == 'u')
		tmp_dst = fonc_unsigned(dst, argptr);
	else if ((c == 'x') | (c == 'X'))
		tmp_dst = fonc_hexa(dst, argptr, c);
	else if (c == '%')
		tmp_dst = ft_strncat(dst, "%", 1);
	return (tmp_dst);
}
