char	*ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

// #include <stdio.h>

// int main(void) {
//   char dest[] = "Hello";
//   char src[] = "World";
//   printf("before function : %s\n", dest);
//   ft_strcpy(dest, src);
//   printf("after function : %s\n", dest);
// }