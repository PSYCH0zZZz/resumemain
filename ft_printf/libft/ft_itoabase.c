/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:20:47 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:20:49 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlenbase(unsigned int n, int base)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += 1;
		return (count);
	}
	if (n > 0)
	{
		count++;
		base /= 10;
	}
	return (count);
}

char	*ft_itoa_base(char *str, unsigned long n, int base, int c)
{
	int		i;

	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n > 0)
	{
		if (base > 10 && (n % base >= 10))
			str[i++] = (n % base) - 10 + c;
		else
			str[i++] = (n % base) + '0';
		n /= base;
	}
	str[i] = '\0';
	return (str);
}
