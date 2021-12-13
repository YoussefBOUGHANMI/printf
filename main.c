#include<stdio.h>

int	ft_printf(const char *str, ...);

int main()
{




int		a = -4;
	int		b = 0;
	char	c = 'o';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = NULL;
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";





	ft_printf("This %p is even stranger\n", (void *)-1);
	printf("This %p is even stranger\n\n", (void *)-1);

//printf("len : %d\n" , ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j));

//printf("len : %d\n" , printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j));
	printf(" %p \n", -1);
	ft_printf("%p \n", -1);
}
