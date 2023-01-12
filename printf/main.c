#include "ft_printf.h"

// int	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	return (i);
// }

void	rec_putstr(char *str, int i)
{
	if (str[i] != '\0')
		rec_putstr(str, i + 1);
	ft_putchar(str[i]);
}

int	main(void)
{
	ft_printf(" %x \n", LONG_MIN);
	printf(" %lx \n", LONG_MIN);
}
