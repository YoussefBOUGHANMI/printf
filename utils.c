/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:51:47 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 15:12:46 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	*fonc_str(char *dst , va_list argptr)
{
	char	*tmp_dst;

	tmp_dst = va_arg(argptr , char *);
	
	dst = ft_strncat(dst , tmp_dst , ft_strlen(tmp_dst));
	return (dst);
}

char    *fonc_char(char *dst , va_list argptr)
{ 
	char	tmp_dst;
	
	tmp_dst = va_arg(argptr, int);
	dst = ft_strncat(dst , &tmp_dst , 1);
	return (dst); 
}

char    *fonc_pointer(char *dst , va_list argptr)
{ 
	char *tmp_dst;
	long pointer;
	
	pointer = va_arg(argptr , long);
	printf("%ld \n" , pointer);
	dst = ft_strncat(dst, tmp_dst , ft_strlen(tmp_dst));
	return (dst); 
}

char    *fonc_integer(char *dst , va_list argptr)
{
	char	*tmp_dst;
	int	nbr;

	nbr = va_arg(argptr, int);
	tmp_dst = ft_itoa(nbr);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst); 
}

char    *fonc_unsigned(char *dst , va_list argptr)
{
	char	*tmp_dst;
	long	nbr;

	nbr = va_arg(argptr, long);
	tmp_dst = ft_unsitoa(nbr);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}

char    *fonc_hexa(char *dst , va_list argptr ,char type)
{
	char	*tmp_dst;
	unsigned int	nbr;

	nbr = va_arg(argptr, unsigned int);
	tmp_dst = ft_longtohexa(nbr, type);
	dst = ft_strncat(dst, tmp_dst, ft_strlen(tmp_dst));
	return (dst);
}

char    *fonc_percentage(char *dst , va_list argptr)
{ return (dst); }



















