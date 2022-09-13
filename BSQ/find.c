#include "bsq.h"
#include <stdlib.h>
#include <stdio.h>

void	fill_first(char	**strs, int	**field, char	*symbols, int	size)
{
	int	i;
	int	j;
	int	length;

	j = 1;
	length = ft_strlen(strs[1]) + 1;
	while (j < length)
	{
		field[0][j] = 1;
		if (strs[1][j] == symbols[1])
			field[0][j] = 0;
		j++;
	}
	i = 0;
	while (i < size - 1)
	{
		field[i][0] = 1;
		if (strs[i + 1][0] == symbols[1])
			field[i][0] = 0;
		i++;
	}
}

void	ft_fill_matr(char **strs, int **field, char *symbols, int size)
{
	int	j;
	int	i;
	int	length;

	j = 1;
	i = 1;
	length = ft_strlen(strs[1]);
	while (i < size - 1)
	{
		j = 1;
		while (j < length)
		{
			if (strs[i + 1][j] == symbols[0])
				field[i][j] = min(field[i][j - 1], field[i - 1][j],
						field[i - 1][j - 1]) + 1;
			else if (strs[i + 1][j] == symbols[1])
				field[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	find_max(int **field, int	size, char	**strs)
{
	int	i;
	int	j;
	int	length;
	int	max;

	i = 0;
	j = 0;
	max = 0;
	length = ft_strlen(strs[1]);
	while (i < size - 1)
	{
		j = 0;
		while (j < length)
		{
			if (field[i][j] > max)
				max = field[i][j];
			j++;
		}
		i++;
	}
	return (max);
}

int	*find_row_col(int	**field, int	size, int	max, char	**strs)
{
	int			i;
	int			j;
	int			length;
	static int	coop[2];

	length = ft_strlen(strs[1]);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < length)
		{
			if (field[i][j] == max)
			{
				coop[0] = i;
				coop[1] = j;
				return (coop);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

void	ft_risovalka(char	**matr, int	*coop, int	max, char	*dest)
{
	int	i2;
	int	j2;

	i2 = coop[0];
	j2 = coop[1];
	i2 = coop[0] - max + 1;
	while (i2 <= coop[0])
	{
		j2 = coop[1] - max + 1;
		while (j2 <= coop[1])
		{
			matr[i2 + 1][j2] = dest[2];
			j2++;
		}
		i2++;
	}
}
