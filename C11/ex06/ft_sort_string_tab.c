int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (0);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		j;
	int		i;
	int		n;
	char	*b;

	j = 0;
	while (tab[n])
		n++;
	while (j < n)
	{
		j = 0;
		i = 0;
		while (i < n)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) == 1)
			{
				b = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = b;
			}
			else
				j++;
			i++;
		}
	}
}
