#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *res7 = ft_itoa(0);
	char *res6 = ft_itoa(9);
	char *res5 = ft_itoa(10);
	char *res4 = ft_itoa(8124);
	char *res3 = ft_itoa(543000);
	char *res2 = ft_itoa(2147483647);
	char *res1 = ft_itoa(-2147483648);
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", res7, res6, res5, res4, res3, res2, res1);
	free(res7);
	free(res6);
	free(res5);
	free(res4);
	free(res3);
	free(res2);
	free(res1);
 	return (0);
}