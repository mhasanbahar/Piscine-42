#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	div;

	div = *a;
	*a = *b;
	*b = div;
}

int main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 3;
    printf("Eski: %d | Eski: %d\n", x, y);
	ft_swap(&x, &y);
	printf("Yeni: %d | Yeni: %d\n", x, y);
}
