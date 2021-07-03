char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int main(void) {
//   char dest[] = "Hello";
//   char src[] = "World";
//   unsigned int n = 2;

//   printf("before function : %s\n", dest);
//   ft_strncpy(dest, src, n);
//   printf("after function : %s\n", dest);
//   //expected output Wollo because only first 2 of src is copied over
// }
