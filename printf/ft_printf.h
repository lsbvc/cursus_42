/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:45:54 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/14 15:32:37 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Include libraries */

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <limits.h>
# include <stdlib.h>

/* Function prototypes */

int		ft_unit_test(va_list obj, const char str, int count);
int		ft_printf(const char *str, ...);
int		ft_putchar(int a);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long ptr);
int		ft_puthex(unsigned long long num, int capital);
char	*ft_itoa(int nb);
int		ft_putnbr(int nb);
char	*ft_itoa2(unsigned int nb);
int		ft_putnbr2(unsigned int nb);

#endif
