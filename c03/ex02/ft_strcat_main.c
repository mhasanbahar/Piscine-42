#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int x;
    int y;

    x = 0;
    while (dest[x])
    {
        x++;
    }
    y = 0;
    while (src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);    
}

int main()
{
    char src[] = "Baharr";
    char dest[] = "Mhasan";
    printf("%s", ft_strcat(dest, src));
}