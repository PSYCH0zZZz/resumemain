#include <stdlib.h>
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*newtab;
	int	i;

	i = 0;
	newtab = malloc(sizeof(*tab) * length);
	if (newtab == 0)
		return (0);
	while (i < length)
	{
		newtab[i] = tab[i];
		i++;
	}
	return (newtab);
}
