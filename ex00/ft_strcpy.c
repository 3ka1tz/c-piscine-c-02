char	*ft_strcpy(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dest);
}
