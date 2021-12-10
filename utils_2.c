/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 18:59:47 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	*fonc_unsigned(char *dst, va_list argptr)
{
	char	*tmp_dst;
	long	nbr;

	nbr = va_arg(argptr, long);
	tmp_dst = ft_unsitoa(nbr);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}

char	*fonc_hexa(char *dst, va_list argptr, char type)
{
	char			*tmp_dst;
	unsigned int	nbr;

	nbr = va_arg(argptr, unsigned int);
	tmp_dst = ft_unsitohexa(nbr, type);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}
