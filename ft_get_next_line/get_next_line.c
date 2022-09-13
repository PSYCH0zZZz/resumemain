/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:27:00 by frylene           #+#    #+#             */
/*   Updated: 2022/01/17 21:38:40 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

int	finder(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_wr(int fd, char *line)
{
	char		*buf;
	int			wr;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	wr = 1;
	while (!finder(line) && wr)
	{
		wr = read(fd, buf, BUFFER_SIZE);
		if (wr == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[wr] = '\0';
		line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*remain;

	remain = ft_wr(fd, remain);
	if (!remain)
		return (NULL);
	line = ft_linehelper(remain);
	remain = ft_get_remain(remain);
	return (line);
}
