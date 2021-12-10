/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:22:16 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 18:29:08 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"my_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
