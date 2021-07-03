int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void) {
//  char test1[] = "\nHaha";
//  char test2[] = "12345";
//  char test3[] = "";
//  char test4[] = "12x45";
//  char test5[] = "HOHO";
//  printf("%d\n", ft_str_is_printable(test1));
//  printf("%d\n", ft_str_is_printable(test2));
//  printf("%d\n", ft_str_is_printable(test3));
//  printf("%d\n", ft_str_is_printable(test4));
//  printf("%d\n", ft_str_is_printable(test5));
// }
