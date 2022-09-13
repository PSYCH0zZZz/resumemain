#include <unistd.h>

void	base_otr(int nbr)
{
	if (nbr < 0)
		write(1, "-", 1);
}

void	ft_main(int nbr, char *base, int i)
{
	int			j;
	int			a[50];
	long int	h;

	j = 0;
	h = (long int)nbr;
	if (h < 0)
		h *= -1;
	while (h / i)
	{
		a[j] = h % i;
		h = h / i;
		j++;
	}
	a[j] = h % i;
	base_otr(nbr);
	while (j >= 0)
	{
		write(1, &base[a[j]], 1);
		j--;
	}
}

int	base_equal(int i, char *base)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (base[k] == base[k + 1])
			return (1);
		k++;
	}
	return (0);
}

int	base_plus(int i, char *base)
{
	int	k;
	int	k2;

	k = 0;
	k2 = 0;
	while (k <= i)
	{
		if (base[k] == '+' || base[k] == '-')
			return (1);
		k++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (*(base + i) != '\0')
		i++;
	if (i > 1 && base_equal(i, base) == 0 && base_plus(i, base) == 0)
	{
		ft_main(nbr, base, i);
	}
}
