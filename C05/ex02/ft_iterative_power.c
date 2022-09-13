int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb2;

	i = 1;
	nb2 = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb *= nb2 ;
		i++;
	}
	return (nb);
}
