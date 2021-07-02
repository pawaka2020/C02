char	*ft_strlowcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void) {
//  char test1[] = "HAHA";
//  ft_strlowcase(test1);
//  printf("%s\n", test1);
// }