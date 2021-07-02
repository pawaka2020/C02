int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void) {
//  char test1[] = "Haha";
//  char test2[] = "12345";
//  char test3[] = "";
//  char test4[] = "12x45";
//  char test5[] = "HOHO";
//  printf("%d\n", ft_str_is_uppercase(test1));
//  printf("%d\n", ft_str_is_uppercase(test2));
//  printf("%d\n", ft_str_is_uppercase(test3));
//  printf("%d\n", ft_str_is_uppercase(test4));
//  printf("%d\n", ft_str_is_uppercase(test5));
// }