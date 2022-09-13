/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:17:27 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:22:03 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	ft_hex(t_print *tab, char c)
{
	unsigned int	n;
	int				l;
	unsigned int	i;

	i = 16;
	n = va_arg(tab->args, unsigned int);
	l = ft_numlenbase(n, i);
	while (i <= n && i < 268435456)
	{
		i *= 16;
		tab->wdt = tab->wdt - 1;
	}
	while (tab->wdt-- > l)
		tab->tl += write(1, " ", 1);
	if (c == 'x')
		tab->tl += ft_putnbr_base(n, "0123456789abcdef");
	if (c == 'X')
		tab->tl += ft_putnbr_base(n, "0123456789ABCDEF");
}
