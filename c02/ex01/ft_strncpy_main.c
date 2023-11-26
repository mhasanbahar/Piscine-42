#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main()
{
    char src[] = "MHasan1";
    char dest[] = "Bahar0";

    printf("%s", ft_strncpy(dest, src, 2));
    printf("\n%s", ft_strncpy(dest, src, 4));
    printf("\n%s", ft_strncpy(dest, src, 6));
}