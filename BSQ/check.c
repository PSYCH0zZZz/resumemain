#include <stdlib.h>
#include "bsq.h"

int	check_length(char **strs, int	size)
{
	int	i;

	if (size < 2)
		return (0);
	i = 2;
	while (i < size)
	{
		if (ft_strlen(strs[i]) != ft_strlen(strs[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_2(char **arr, int size)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	length = ft_strlen(arr[0]);
	while (i < size)
	{
		j = 0;
		while (j < length)
		{
			if (arr[i][j] != arr[0][length - 3]
				&& arr[i][j] != arr[0][length - 2]
				&& arr[i][j] != arr[0][length - 1]
				&& arr[i][j] != arr[0][length])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_3(char **arr)
{
	int	length;

	length = ft_strlen(arr[0]);
	if (length < 4)
		return (0);
	if (arr[0][length - 1] == arr[0][length - 2]
		&& arr[0][length - 1] == arr[0][length - 3])
		return (0);
	if (arr[0][length - 2] == arr[0][length - 1]
		&& arr[0][length - 2] == arr[0][length - 3])
		return (0);
	if (arr[0][length - 3] == arr[0][length - 2]
		&& arr[0][length - 3] == arr[0][length - 1])
		return (0);
	return (1);
}

int	ft_check_4(char **arr, int size)
{
	int	numb;
	int	j;
	int	i;

	numb = 0;
	j = 0;
	i = 0;
	while (arr[0][j] >= '0' && arr[0][j] <= '9' && j < ft_strlen(arr[i]) - 3)
	{
		numb = (numb * 10) + ((int)arr[0][j] - '0');
		j++;
	}
	i = 1;
	while (i < size - 1)
		i++;
	if (i != numb)
		return (0);
	return (1);
}

int	ft_main_check(char **arr, int	size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if ((arr[i][j] > 127 || arr[i][j] < 32)
				&& arr[i][j] != '\n')
				return (0);
			j++;
		}
		i++;
	}
	if (!check_length(arr, size))
		return (0);
	if (!ft_check_2(arr, size))
		return (0);
	if (!ft_check_3(arr))
		return (0);
	if (!ft_check_4(arr, size))
		return (0);
	return (1);
}
