/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longtohexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:43:24 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/13 19:09:47 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	lower_base(int nbr)
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

int	ft_unsitohexa(unsigned int nbr, char type)
{
	char	*a;
	int		len;
	int		add_char;
	long	n;

	n = nbr;
	len = len_hexa(n);
	a = malloc((len + 1) * sizeof(char));
	while (len)
	{
		len--;
		if (type == 'X')
			a[len] = upper_base(n % 16);
		else
			a[len] = lower_base(n % 16);
		n = n / 16;
	}
	add_char = ft_strlen(a);
	ft_putstr(a);
	free(a);
	return (add_char);
}

int	ft_longtohexa(unsigned long n, char type)
{
	char	*a;
	int		len;
	int		add_char;

	len = len_hexa(n);
	a = malloc((len + 1) * sizeof(char));
	a[len] = '\0';
	while (len)
	{
		len--;
		if (type == 'X')
			a[len] = upper_base(n % 16);
		else
			a[len] = lower_base(n % 16);
		n = n / 16;
	}
	add_char = ft_strlen(a);
	ft_putstr(a);
	free(a);
	return (add_char);
}
