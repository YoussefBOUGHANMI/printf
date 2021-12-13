/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:55:05 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/11 17:40:55 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	len_l(long n)
{
	int	i;

	i = 1;
	while ((n / 10) != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_unsitoa(unsigned int nbr)
{
	char	*a;
	int		len;
	int		add_char;
	long	n;

	n = nbr;
	len = len_l(n);
	a = malloc((len + 1) * sizeof(char));
	while (len)
	{
		len--;
		a[len] = (n % 10) + 48;
		n = n / 10;
	}
	add_char = ft_strlen(a);
	ft_putstr(a);
	free(a);
	return (add_char);
}
