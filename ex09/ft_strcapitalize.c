int ft_small(char c){
  int i;

  if ((c >= 'a') && (c <= 'z'))
  {
    i = 1;
  }
  else
  {
    i = 0;
  }
  return i;
}

int ft_big(char c)
{
  int i;

  if ((c >= 'A') && (c <= 'Z'))
  {
    i = 1;
  }
  else
  {
    i = 0;
  }
  return i;
}

int ft_wordstart(char c){
  int i;

  if ((ft_small(c) == 0) && (ft_big(c) == 0))
  {
    i = 1;
  }
  else
  {
    i = 0;
  }
  return i;
}

char *ft_strcapitalize(char *str)
{
  int i;

  i = -1;
  while (i++, str[i])
  {
    if ((ft_small(str[i]) == 1) && (ft_wordstart(str[i-1]) == 1))
    {
      str[i] -= 32;
    }
  }
  return str;
}

// #include <stdio.h>
// int main(void)
// {
//   char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un" ;
//   ft_strcapitalize(str);
//   printf("%s\n", str);
// }