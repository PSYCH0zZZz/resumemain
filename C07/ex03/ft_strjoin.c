#include <stdlib.h>
int	check1(int size, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	check2(char *sep)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (sep[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*j;
	char	*res;

	i = 0;
	len = check2(sep) * (size - 1) + check1(size, strs) + 1;
	res = (char *)malloc(len);
	*res = '\0';
	while (i + 1 < size)
	{
		ft_strcat(res, strs[i]);
		if (i == size)
			res[i] = '\0';
		else
			ft_strcat(res, sep);
		i++;
	}
	ft_strcat(res, strs[i]);
	j = "\n";
	ft_strcat(res, j);
	return (res);
}
