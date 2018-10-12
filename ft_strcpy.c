
char	*ft_strcpy(char	*dest, char *src)
{
	int i;

	i = 0;
	while (src && (src < dest))
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
