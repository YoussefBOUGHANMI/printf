/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:52:41 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/09 10:24:11 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	*flag_parser(char *str)
{
	char	*tmp_dst;

	if (*str == '#')
		tmp_dst = flag_sharp(str);
	else if (*str == ' ')
		tmp_dst = flag_space(str);
	else
		tmp_dst = flag_plus(str);
	return (tmp_dst);
}

char	*drapeau_parser(char *str)
{
	char	*tmp_dst;

	if (*str == '-')
		tmp_dst = drapeau_minus(*str);
	else if (*str == '0')
		tmp_dst = drapeau_zero(*str);
	else
		tmp_dst = drapeau_point(*str);
	return (tmp_dst);
}

char	*parm_parser(char *str)
{
	char	*tmp_dst;

	if (*str == 'c')
		tmp_dst = fonc_char(*str);
	else if (*str == 's')
		tmp_dst = fonc_str(*str);
	else if (*str == 'p')
		tmp_dst = fonc_pointer(*str);
	else if (*str == 'd')
		tmp_dst = fonc_digit(*str);
	else if (*str == 'i')
		tmp_dst = fonc_integer(*str);
	else if (*str == 'u')
		tmp_dst = fonc_unsigned(*str);
	else if (*str == 'x')
		tmp_dst = fonc_hexa(*str);
	else if (*str == 'X')
		tmp_dst = fonc_unsihexa(*str);
	else if (*str == '%')
		tmp_dst == fonc_percentage(*str);
	return (tmp_dst);
}
