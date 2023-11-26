#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int x;
    int i;

    i = 0;
    if (to_find[0] == '\0')
    {
        return (str);
    }
    while (str[i])
    {
        x = 0;
        while (str[i + x] == to_find[x] && str[i])
        {
            if (to_find[x + 1] == '\0')
                return (&str[i]);
            x++;    
        }
        i++;
    }
    return (0);
}

int main()
{
    char str[] = "42 Kocaeli havuz ogrencisi Muhammet Hasan BAHAR";
    char to_find[] = "Muhammet";
    printf("%s", ft_strstr(str, to_find));
}