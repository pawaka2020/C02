char	*ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);

#include <stdio.h>

int main(void) {
 char test1[] = "Haha";
 char test2[] = "12345";
 char test3[] = "";
 char test4[] = "12x45";
 printf("%d\n", ft_str_is_alpha(test1));
 printf("%d\n", ft_str_is_alpha(test2));
 printf("%d\n", ft_str_is_alpha(test3));
 printf("%d\n", ft_str_is_alpha(test4));
}