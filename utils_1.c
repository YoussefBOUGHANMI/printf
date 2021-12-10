/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 18:53:47 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	*fonc_str(char *dst, va_list argptr)
{
	char	*tmp_dst;

	tmp_dst = va_arg(argptr, char *);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}

char	*fonc_char(char *dst, va_list argptr)
{
	char	tmp_dst;

	tmp_dst = va_arg(argptr, int);
	dst = ft_strncat(dst, &tmp_dst, 1);
	return (dst);
}

char	*fonc_pointer(char *dst, va_list argptr)
{
	char	*tmp_dst;
	long	pointer;

	pointer = va_arg(argptr, long);
	tmp_dst = ft_longtohexa(pointer, 'x');
	tmp_dst = ft_strncat("0x", tmp_dst, ft_strlen(tmp_dst));
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}

char	*fonc_integer(char *dst, va_list argptr)
{
	char	*tmp_dst;
	int		nbr;

	nbr = va_arg(argptr, int);
	tmp_dst = ft_itoa(nbr);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}
