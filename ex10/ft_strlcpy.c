//#//include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		if (i < size)
			dest[i] = src[i];
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void){
//   char dest[] = "Hello";
//   char src[] = "World";
//   unsigned int size  = 1;
//   printf("dest = %s, sec = %s, size = %d\n", dest, src, size);
//   ft_strlcpy(dest, src, size);
//   printf("After ft dest now = %s\n", dest);
// }