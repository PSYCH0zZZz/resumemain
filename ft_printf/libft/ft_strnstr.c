/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:18:26 by frylene           #+#    #+#             */
/*   Updated: 2022/01/15 18:22:41 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 && n)
	{
		if (*s1 != s2[i])
		{
			s1++;
			n--;
			if (n == 0)
				return (NULL);
		}
		if (*s1 == s2[i])
			i++;
		else
			i = 0;
		if (s2[i] == '\0')
			return ((char *)(s1 - i + 1));
		s1++;
		n--;
	}
	return (NULL);
}
