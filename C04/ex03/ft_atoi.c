int	usl(char c, int k)
{
	int	usl1;
	int	usl2;

	if (!k)
		return (c > 47 && c < 58 );
	else
	{
		usl1 = (c == ' ' || c == '\n' || c == '\t');
		usl2 = (c == '\f' || c == '\v' || c == '\r');
		return (usl1 || usl2);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	result;

	result = 0;
	j = 1;
	i = -1;
	while (usl(str[++i], 1))
	{
	}
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			j = j * (-1);
	if (usl(str[i], 0))
		result = (str[i] - '0') * j;
	while (usl(str[i++], 0))
		result = result * 10 + (str[i] - '0') * j;
	return (result);
}
