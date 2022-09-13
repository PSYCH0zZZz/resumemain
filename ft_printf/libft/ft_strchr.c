/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:19:23 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:19:25 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			return ((char *)string + i);
		i++;
	}
	if (string[i] == (char)c)
		return ((char *)string + i);
	return (NULL);
}
