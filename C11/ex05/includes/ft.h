#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <fcntl.h>
int		ft_athelp(char *vol, int i);
int		ft_athelp2(int minus, int numb);
int		ft_atoi(char *vol);
int		ft_culc(int a, char op, int b);
int		ft_oper_f(char op);
int		minus(int a, int b);
int		plus(int a, int b);
int		multi(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putnbr(int a);
void	ft_putstr(char *str);
int		ft_check(char op, int b);
int		do_op(int argc, char **argv);
void	putt(int *arr, int i);

#endif
