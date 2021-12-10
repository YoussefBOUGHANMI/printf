/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:26:48 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/10 15:13:44 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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

char	*parm_parser(char c, char *dst, va_list argptr);
int	ft_isparm(char c);
char	*fonc_str(char *str , va_list argptr);
int	ft_printf(const char *str, ...);
char    *fonc_char(char *dst , va_list argptr);
char    *fonc_str(char *dst , va_list argptr);
char    *fonc_pointer(char *dst , va_list argptr);
char    *fonc_digit(char *dst , va_list argptr);
char    *fonc_integer(char *dst , va_list argptr);
char    *fonc_unsigned(char *dst , va_list argptr);
char    *fonc_hexa(char *dst , va_list argptr, char c);
char    *fonc_percentage(char *dst , va_list argptr);
char	*ft_strncat(char *dst, char *src, int size);
size_t	ft_strlen(char const *str);
char	*ft_itoa(int n);
char	*ft_unsitoa(unsigned int n);
char	*ft_longtohexa(unsigned int n,char type);

#endif
