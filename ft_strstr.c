#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
}

int	main(int ac , char **av)
{
	printf("%s\n", ft_strstr(av[1], av[2]));
	return (0);
}
