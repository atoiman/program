#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int	ft_atoi(char *str)
{
	int i;
	int nb_is_negative;
	int nb;

	i = 0;
	nb_is_negative = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	i++;
	while (str[i] == 45 || str[i] == 42)
	{
		if (str[i] == 45)
			nb_is_negative = 1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (nb_is_negative)
		return (-nb);
	return (nb);
}

int	main(int ac, char **av)
{
	printf("%d\n",ft_atoi(av[1]));
	return (0);
}
