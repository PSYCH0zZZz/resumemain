#include <unistd.h>
#include "../includes/ft.h"
void	putt(int *arr, int i)
{
	i -= 1;
	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		arr[12];
	int		b;
	int		i;

	if (nb < 0)
		write (1, "-", 1);
	if (nb == 0)
		write (1, "0", 1);
	i = 0;
	while (nb != 0)
	{
		if (nb < 0)
			b = (nb % 10) * (-1) + 48;
		 else
			b = nb % 10 + 48;
		arr[i] = b;
		nb = nb / 10;
		i++;
	}
	putt(arr, i);
}
