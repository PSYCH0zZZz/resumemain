#include "bsq.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

int	min(int a, int b, int c)
{
	int	min;

	if (a <= c && a <= b)
		min = a;
	if (c <= a && c <= b)
		min = c;
	if (b <= a && b <= c)
		min = b;
	return (min);
}

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	if (i < n)
	{
		while (*(dest + i) != '\0')
		{
			*(dest + i) = '\0';
			i++;
		}
	}
	return (dest);
}

void	standart_input(char	*filename, char	*str, char	**strs, int	**field)
{
	char	c;
	int		fin;

	fin = open(filename, O_RDWR | O_TRUNC | O_CREAT);
	if (fin != -1)
		while (read(0, &c, 1))
			if (c != '\0')
				write (fin, &c, 1);
	write(1, "  \n", 3);
	prob(filename, str, strs, field);
}
