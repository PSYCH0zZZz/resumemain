/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:19:02 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:19:04 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	z;
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	z = 0;
	i = len_dst;
	if (size > 0 && len_dst < (size - 1))
	{
		while (src[z] && len_dst + z < (size - 1))
		{
			dst[i] = src[z];
			z++;
			i++;
		}
		dst[i] = 0;
	}
	if (len_dst >= size)
	{
		len_dst = size;
	}
	return (len_dst + len_src);
}
