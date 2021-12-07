/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Youssef <youssef.boughanmi.pro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:53:36 by Youssef           #+#    #+#             */
/*   Updated: 2021/12/07 20:25:44 by Youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>


void test_2(va_list argptr)
{
	int nb;
	nb = va_arg(argptr , int);
	printf("%d\n" , nb);

}




int	ft_isparm(char c)
{
	if ((c == 'c') | (c == 's') | (c == 'p') | (c == 'd') 
	| (c == 'i') | (c == 'u') | (c == 'x') | (c == 'X') | (c == '%'))
	return(1);

	return (0);
}



int	ft_printf(const char *str, ...)
{
	va_list argptr;
	va_start(argptr, str);
	int nb;
	
	nb = 0;
	while (*str != 0)
	{
		if (*str == '%' && ft_isparm(*(str + 1)))
		{
			printf("%s","    parm     ");
			str = str + 2;
			nb = va_arg(argptr, int);
			printf("%d\n" , nb);
		}
		else
		{
			printf("%c" , *str);
			nb++;
			str++;
		}
	}
	va_end(argptr);
	return (nb);	
}

int main()
{
	//ft_printf("test % test %d test %c"  , 1 , 2);
	
	printf("test %010 test" , -12);
}
