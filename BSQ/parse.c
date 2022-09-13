#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

int	count_new_line(char	*filename)
{
	int		fout;
	char	*buf;
	int		count;
	int		i;

	count = 0;
	fout = open(filename, O_RDONLY);
	buf = (char *) malloc(sizeof(char) * 32);
	if (fout != -1)
	{
		while (read(fout, buf, sizeof(char)))
		{
			i = 0;
			while (buf[i])
			{
				if (buf[i] == '\n')
					count++;
				i++;
			}
		}
		close(fout);
	}
	free (buf);
	return (count);
}

char	*parse_to_string(char	*filename)
{
	int		fout;
	char	*buf;
	char	*str;
	int		i;

	i = 0;
	fout = open(filename, O_RDONLY);
	buf = (char *) malloc(sizeof(char));
	if (!buf)
		exit (1);
	str = (char *) malloc(sizeof(char) * 100);
	if (!str)
		exit (1);
	if (fout != -1)
	{
		while (read(fout, buf, sizeof(char)))
		{
			*(str + i) = *buf;
			i++;
		}
		close(fout);
	}
	free (buf);
	*(str + i) = '\0';
	return (str);
}

char	**matrix(char	*str, int size)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	strs = (char **) malloc(size * sizeof(char *) * 255 * 2);
	if (!strs)
		exit (1);
	while (*(str + i) != '\0' && k < size)
	{
		j = i;
		while (*(str + j) != '\n')
			j++;
		strs[k] = malloc((j - i) * 255 * 3);
		if (!strs[k])
			exit (1);
		ft_strncpy(strs[k], str + i, j - i);
		i = j + 1;
		k++;
	}
	return (strs);
}

int	**create_another_matr(char	**strs, int	size, char	*symbols)
{
	int	**matr;
	int	i;
	int	length;

	matr = (int **) malloc(size * sizeof(int *) * 200);
	if (!matr)
		exit (1);
	i = 0;
	while (i < size)
	{
		length = ft_strlen(strs[1]);
		matr[i] = (int *) malloc(length * sizeof(int) * 200);
		if (!matr[i])
			exit (1);
		i++;
	}
	fill_first(strs, matr, symbols, size);
	ft_fill_matr(strs, matr, symbols, size);
	return (matr);
}
