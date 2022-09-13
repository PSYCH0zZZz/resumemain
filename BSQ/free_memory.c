#include <stdlib.h>
#include "bsq.h"

void	free_mem_strs(char	**strs, int	size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(strs[i]);
		i++;
	}
	free (strs);
	strs = NULL;
}

void	free_mem_field(int	**field, int	size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		free (field[j]);
		j++;
	}
	free (field);
	field = NULL;
}

void	free_mem_str(char	*str)
{
	free(str);
	str = NULL;
}
