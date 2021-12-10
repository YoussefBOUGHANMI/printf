/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:55:05 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 14:06:28 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"my_printf.h"

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

char	*ft_unsitoa(unsigned int nbr)
{
	char	*a;
	int		len;
	long	n;

	n = nbr;
	len = len_l(n);
	a = malloc((len + 1) * sizeof(char));
	while (len >= 0)
	{
		len--;
		a[len] = (n % 10) + 48;
		n = n / 10;
	}
	return (a);
}
