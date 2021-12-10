/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longtohexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:43:24 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 15:13:29 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"my_printf.h"

char	lower_base(int nbr)
{
	char	c;

	if (nbr < 10) 
		c = nbr + 48;
	else 
		c = (nbr % 10) + 97;
	return (c);
}


char	upper_base(int nbr)
{
	char	c;

	if (nbr < 10)
		c = nbr + 48;
	else
		c = (nbr % 10) + 65;
	return (c);
}


int	len_hexa(long n)
{
	int	i;

	i = 1;
	while ((n / 16) != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}


char	*ft_longtohexa(unsigned int nbr,char type)
{
	char	*a;
	int		len;
	long	n;

	n = nbr;
	len = len_hexa(n);
	a = malloc((len + 1) * sizeof(char));
	while (len >= 0)
	{
		len--;
		if (type == 'X')
			a[len] = upper_base(n % 16);
		else
			a[len] = lower_base(n % 16);
		n = n / 16;
	}
	return (a);
}
