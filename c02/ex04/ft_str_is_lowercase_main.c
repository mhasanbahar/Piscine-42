#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (i);
}

int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
     printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}