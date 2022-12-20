/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:45:54 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/20 17:07:18 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Include libraries */

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>

/* Function prototypes */

int	ft_putchar(int a);
int	ft_printf(const char *str, ...);

#endif
