int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			res *= i;
			i++;
		}
		return (res);
	}
	else
		return (0);
}
