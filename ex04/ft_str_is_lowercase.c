int	ft_str_is_lowercase(char *str)
{
	int i;

	i = -1;
	while (i++, str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>

// int main(void) {
//  char test1[] = "Haha";
//  char test2[] = "12345";
//  char test3[] = "";
//  char test4[] = "12x45";
//  char test5[] = "hoho";
//  printf("%d\n", ft_str_is_lowercase(test1));
//  printf("%d\n", ft_str_is_lowercase(test2));
//  printf("%d\n", ft_str_is_lowercase(test3));
//  printf("%d\n", ft_str_is_lowercase(test4));
//  printf("%d\n", ft_str_is_lowercase(test5));
// }