#include "../includes/ft.h"
int	ft_oper_f(char op)
{
	if (op == '-')
		return (0);
	if (op == '+')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (3);
	if (op == '%')
		return (4);
	return (5);
}

int	ft_culc(int a, char op, int b)
{
	int	(*arr[5])(int a, int b);
	int	cont;

	arr[0] = &minus;
	arr[1] = &plus;
	arr[2] = &multi;
	arr[3] = &div;
	arr[4] = &mod;
	cont = ft_oper_f(op);
	if (cont == 5)
		return (0);
	return ((*arr[cont])(a, b));
}
