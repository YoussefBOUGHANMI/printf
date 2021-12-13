/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/13 19:06:30 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	fonc_str(va_list argptr)
{
	char	*tmp_dst;

	tmp_dst = va_arg(argptr, char *);
	if (!tmp_dst)
	{
		ft_putstr("(null)");
		return (6);
	}
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
	int		add_char;

	pointer = va_arg(argptr, long);
	if (!pointer)
	{
		ft_putstr("(nil)");
		return (5);
	}
	if (pointer == -1)
	{
		ft_putstr("0xffffffffffffffff");
		return (18);
	}
	ft_putstr("0x");
	add_char = ft_longtohexa(pointer, 'x');
	return (2 + add_char);
}

int	fonc_integer(va_list argptr)
{
	int		add_char;
	int		nbr;
	char	*tmp_dst;

	nbr = va_arg(argptr, int);
	tmp_dst = ft_itoa(nbr);
	ft_putstr(tmp_dst);
	add_char = ft_strlen(tmp_dst);
	free(tmp_dst);
	return (add_char);
}
