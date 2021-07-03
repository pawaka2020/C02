#include <unistd.h>

void	ft_print_hexa(char np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		ft_print_hexa(np / 10);
		ft_print_hexa(np % 10);
	}
	else
	{
		write(1, &hex[np], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] == 127)
		{
			write(1, &"\\", 1);
			if (str[i] < 16)
			{
				write(1, &"0", 1);
			}
			ft_print_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i += 1;
	}
}

// int main(void)
// {
//   ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }
