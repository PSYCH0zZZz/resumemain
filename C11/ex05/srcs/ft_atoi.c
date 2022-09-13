#include "../includes/ft.h"
int	ft_athelp(char *vol, int i)
{
	while (vol[i])
	{
		if (vol[i] == ' ' || vol[i] == '\t' || vol[i] == '\n'
			|| vol[i] == '\v' || vol[i] == '\f' || vol[i] == '\r')
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_athelp2(int minus, int numb)
{
	if (minus % 2 == 0)
		return (numb);
	if (minus % 2 == 1)
		return (-numb);
	return (0);
}

int	ft_atoi(char *vol)
{
	int	minus;
	int	numb;
	int	i;

	minus = 0;
	numb = 0;
	i = 0;
	ft_athelp(vol, i);
	while (vol[i])
	{
		if (vol[i] == '-')
			minus++;
		else if (vol[i] != '-' && vol[i] != '+')
			break ;
		i++;
	}
	while (vol[i] >= '0' && vol[i] <= '9')
	{
		numb = (numb * 10) + ((int)(vol[i]) - '0');
		i++;
	}
	return (ft_athelp2(minus, numb));
}
