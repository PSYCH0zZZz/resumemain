/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:19:09 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:19:11 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	size_t	i;
	char	*newstr;

	t = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(*s1) * ((ft_strlen((char *)s1))
				+ (ft_strlen((char *)s2)) + 1));
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[t++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		newstr[t++] = s2[i];
		i++;
	}
	newstr[t] = '\0';
	return (newstr);
}
