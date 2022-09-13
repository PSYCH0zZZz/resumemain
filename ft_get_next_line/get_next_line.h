/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:27:48 by frylene           #+#    #+#             */
/*   Updated: 2022/01/17 21:35:55 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

char	*get_next_line(int fd);
char	*ft_wr(int fd, char *line);
char	*ft_strjoin(char	*s1, char	*s2);
int		finder(char *str);
size_t	ft_strlen(const char *str);
char	*ft_linehelper(char *line);
char	*ft_get_remain(char *remain);

#endif
