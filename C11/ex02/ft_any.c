#include <stdlib.h>
int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
