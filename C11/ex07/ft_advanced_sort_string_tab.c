#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[j] > 0))
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
