/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:20:34 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:20:36 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;
	unsigned char	character;

	i = 0;
	string = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (*string == character)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
