#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a = 13;
	int b = 2;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d | %d", *div, *mod);
	return(0);
}