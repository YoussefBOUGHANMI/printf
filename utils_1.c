/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/11 10:07:05 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

int	fonc_str(va_list argptr)
{
	char	*tmp_dst;

	tmp_dst = va_arg(argptr, char *);
	ft_putstr(tmp_dst);	
	return (ft_strlen(tmp_dst));
}

int	fonc_char(va_list argptr)
{
	char	tmp_dst;

	tmp_dst = va_arg(argptr, int);
	ft_putchar(tmp_dst);
	return (1);
}

int	fonc_pointer(va_list argptr)
{
	long	pointer;
	int	add_char;

	pointer = va_arg(argptr, long);
	ft_putstr("0x");
	add_char = ft_longtohexa(pointer, 'x');
	return (2 + add_char);
}

int	fonc_integer(va_list argptr)
{
	int	add_char;
	int	nbr;
	char	*tmp_dst;

	nbr = va_arg(argptr, int);
	tmp_dst = ft_itoa(nbr);
	ft_putstr(tmp_dst);
	add_char = ft_strlen(tmp_dst);
	free(tmp_dst);
	return (add_char);
}
