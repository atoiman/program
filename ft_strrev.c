#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int temp;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	printf("%s\n",ft_strrev(av[1]));
	return (0);
}
