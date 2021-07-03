char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void) {
//  char test1[] = "Haha";
//  ft_strupcase(test1);
//  printf("%s\n", test1);
// }
