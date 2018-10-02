#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str,char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j= 0;
	k = ft_strlen(to_find);
	while(str != to_find)
	{
		str++;
		i++;
	}
	while (str[i] == to_find[j])
	{
		j = 0;
		while (str[i+j] == to_find[j])
				j++;
		if (j == k)
		return (&str[i]);
	}
	return (0);
}


int main(int ac, char **av)
{
	char str[] = "salut les copaings";
	char to_find[] = "les";
	printf("%s\n",ft_strstr(str , to_find));
	return  (0);
}
