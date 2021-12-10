/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:53:36 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 19:08:55 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_printf.h"

int	ft_isparm(char c)
{
	if ((c == 'c') | (c == 's') | (c == 'p') | (c == 'd')
		| (c == 'i') | (c == 'u') | (c == 'x') | (c == 'X') | (c == '%'))
		return (1);
	return (0);
}

char	*ft_strncat(char *dst, char *src, int size)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc ((ft_strlen(dst) + size + 1) * sizeof(char));
	while (*dst)
	{
		res[i] = *dst;
		i++;
		dst ++;
	}
	while (size)
	{
		res[i] = *src;
		size--;
		src++;
		i++;
	}
	res[i] = 0;
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	char	*dst;

	dst = "\0";
	va_start(argptr, str);
	while (*str != 0)
	{
		if (*str == '%' && ft_isparm(*(str + 1)))
		{
			dst = parm_parser(*(str + 1), dst, argptr);
			str = str + 2;
		}
		else if (*str == '%' && ft_isparm(*str + 1) == 0)
			return (-1);
		else
		{
			dst = ft_strncat(dst, (char *)str, 1);
			str++;
		}
	}
	va_end(argptr);
	ft_putstr(dst);
	return (ft_strlen(dst));
}
