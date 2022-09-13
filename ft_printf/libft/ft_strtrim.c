/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:18:16 by frylene           #+#    #+#             */
/*   Updated: 2022/01/15 18:22:23 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *string, char const *set)
{
	size_t		size;
	char		*newstring;

	if (!string || !set)
		return (NULL);
	while (*string && ft_strchr(set, *string))
		string++;
	size = ft_strlen((char *)string);
	while (size && ft_strchr(set, string[size]))
		size--;
	newstring = ft_substr((char *)string, 0, size + 1);
	return (newstring);
}
