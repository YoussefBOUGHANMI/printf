/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:25:56 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/09 10:21:33 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

int	ft_isflag(char *str)
{
	char	c;

	c = str[0];
	if ((c == '#') | (c == ' ') | (c == '+'))
		return (1);
	return (0);
}

int	ft_isdrapeau(char *str)
{
	char	c;

	c = str[0];
	if ((c == '-') | (c == '0') | (c == '.'))
		return (1);
	return (0);
}

int	ft_isparm(char *str)
{
	char	c;

	c = str[0];
	if ((c == 'c') | (c == 's') | (c == 'p') | (c == 'd')
		| (c == 'i') | (c == 'u') | (c == 'x') | (c == 'X') | (c == '%'))
		return (1);
	return (0);
}
