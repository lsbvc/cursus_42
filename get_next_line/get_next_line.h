/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:30:48 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/02/08 13:44:02 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* Include libraries */

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>

/* Function prototypes */

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char *s2);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen(char *str);
#endif
