/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:12:00 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/02/08 14:12:08 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	ft_line(char *buffer)
{
	
}

char	ft_read_file(char *buffer, char *mini_buffer)
{
	char	*temp;

	temp = ft_strjoin(buffer, mini_buffer);
	free(buffer);
	return (temp);
}

char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0))
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}

/*int	main(void)
{
	int			fd;
	char		*buf;
	ssize_t		nr_bytes;

	buf = (char *) malloc (sizeof(char) * 16);
	fd = open("/Users/lvelasqu/Proyects/lvelasqu/get_next_line/file", O_RDONLY);
	if (fd == -1)
	{
		printf("Error while opening file \n");
	}
	else
	{
		nr_bytes = read(fd, buf, 3);
		close(fd);
		if (nr_bytes == 0)
		{
			printf("Empty file \n");
		}
		else
		{
			printf("The number of characters is: %d, the content is: %s", (int)nr_bytes, buf);
		}
	}
	free (buf);
	return (0);
}*/