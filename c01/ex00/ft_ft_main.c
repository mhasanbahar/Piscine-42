#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
    int a;
    a = 15;

    ft_ft(&a);
    printf("%d", a);
}