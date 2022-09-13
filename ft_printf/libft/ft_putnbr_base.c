/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:19:48 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:19:50 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long	base_len;
	unsigned long	num;
	int				l;

	l = 1;
	num = n;
	base_len = ft_strlen(base);
	if (num == 0)
	{
		ft_putchar('0');
		return (l);
	}
	if (num >= base_len)
	{
		l += ft_putnbr_base(num / base_len, base);
		ft_putchar(base[num % base_len]);
	}
	else if (num < base_len)
		ft_putchar(base[num]);
	return (l);
}
