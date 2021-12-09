/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:26:48 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/09 11:00:28 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

char	*flag_parser(char *str, va_list argptr);
char	*drapeau_parser(char *str, va_list argptr);
char	*ft_parser(char *str, va_list argptr);
int	ft_isflag(char *str);
int	ft_isdrapeau(char *str);
int	ft_isparm(char *str);
char	*fonc_str(char *str , va_list argptr);



#endif

