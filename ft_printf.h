/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:26:48 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/11 18:47:42 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int	ft_isparm(char c);
int	ft_printf(const char *str, ...);
int	parm_parser(char c, va_list argptr);
int	fonc_str(va_list argptr);
int	fonc_char(va_list argptr);
int	fonc_pointer(va_list argptr);
int	fonc_integer(va_list argptr);
int	fonc_unsigned(va_list argptr);
int	fonc_hexa(va_list argptr, char type);
int	fonc_percentage();
int	ft_longtohexa(unsigned long n, char type);
int	ft_unsitohexa(unsigned int nbr, char type);
int	ft_unsitoa(unsigned int nbr);
char	*ft_itoa(int n);
size_t	ft_strlen(char const *str);
void	ft_putstr(char	*str);
void	ft_putchar(char c);

#endif
