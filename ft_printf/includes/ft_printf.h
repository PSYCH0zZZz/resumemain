/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frylene <frylene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:17:53 by frylene           #+#    #+#             */
/*   Updated: 2022/01/14 16:11:50 by frylene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "libft.h"

typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		dash;
	int		tl;
}	t_print;

t_print	*ft_initialise_tab(t_print *tab);
int		ft_printf(const char *format, ...);
void	ft_int(t_print	*tab, char c);
void	ft_width(t_print *tab);
int		ft_format(t_print *tab, const char *format, int pos);
void	ft_char(t_print *tab, char f);
void	ft_string(t_print *tab);
void	ft_percent(t_print *tab);
void	ft_pointer(t_print *tab);
void	ft_hex(t_print *tab, char c);
int		ft_putnbr_base(unsigned long n, char *base);
char	*ft_itoa_base(char *str, unsigned long n, int base, int c);
int		ft_numlenbase(unsigned int n, int base);

#endif