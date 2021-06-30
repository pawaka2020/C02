char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (i++, src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void) {
//   char dest[] = "Hello";
//   char src[] = "World";
//   printf("before function : %s\n", dest);
//   ft_strcpy(dest, src);
//   printf("after function : %s\n", dest);
// }
