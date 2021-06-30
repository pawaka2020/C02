int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
//  printf("%d\n", ft_str_is_alpha(test1));
//  printf("%d\n", ft_str_is_alpha(test2));
//  printf("%d\n", ft_str_is_alpha(test3));
//  printf("%d\n", ft_str_is_alpha(test4));
// }