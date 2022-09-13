#include "../includes/ft.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	check(char *op, char *str)
{
	if (ft_atoi(str) == 0 && *op == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if ((ft_atoi(str) == 0) && (*op == '/'))
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	return (1);
}

int	do_op(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 4)
	{
		x = ft_culc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		ft_putnbr(x);
	}
	else
		return (0);
	return (x);
}

int	main(int argc, char **argv)
{
	if (check(argv[2], argv[3]) == 1)
	{
		do_op(argc, argv);
	}
	write(1, "\n", 1);
}
