#include "ft_printf.h"
#include <stdio.h>
/*
int main()
{
	ft_printf("%10.2d\n", 789);
	printf("%10.2d\n", 789);
	return (0);
}
*/
/*
int main()
{
	int a=10;
	int* ptr = &a;

	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	return (0);
}
*/
/*
int main()
{
	int r1 = ft_printf("%10s is a string", "this");
	ft_printf("\n");
	int r2 = printf("%10s is a string", "this");
	
	printf("\nMi printf devuelve %d\n", r1);
	printf("El printf de vdad devuelve %d", r2);
	
	return (0);
}
*/
/*
int main()
{
	ft_printf("%k", NULL);
	printf("%s", NULL);
	return (0);
}
*/
/*
int main()
{
	signed char a = 0;
	signed char b = 0;
	char s1[] = "sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";
    char s2[] = "sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";

	
	signed char *p1 = &a;
	signed char *p2 = &b;

    ft_printf("%s%hhn\n", s1, p1);
    printf("%d\n\n", a);
	printf("%s%hhn\n", s2, p2);
    printf("%d\n\n", b);
	return (0);
}
*/

int main()
{
	double fl = 456.78987654321;
	int	ip = 0;
	int	ia = 0;
	int *p = &ip;
	int *a = &ia;

	printf("%13f, %n%.12f\n", fl, p, -2.5);
	printf("%d\n", ip);
	ft_printf("%13f, %n%.12f\n", fl, a, -2.5);
	printf("%d\n", ia);
	//ft_printf("%s", "abc");
	//printf("%s", "abc");
	
	return (0);
}
