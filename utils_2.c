/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/11 09:50:02 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

int	fonc_unsigned(va_list argptr)
{
	int	add_char;
	long	nbr;

	nbr = va_arg(argptr, long);
	add_char = ft_unsitoa(nbr);
	return (add_char);
}

int	fonc_hexa(va_list argptr, char type)
{
	int			add_char;
	unsigned int	nbr;

	nbr = va_arg(argptr, unsigned int);
	add_char = ft_unsitohexa(nbr, type);
	return (add_char);
}

int	fonc_percentage()
{
	ft_putchar('%');
	return (1);
}
