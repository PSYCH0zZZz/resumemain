#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	sum;
	int	*arr;

	i = 0;
	sum = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = (int *)malloc(sum);
	if (arr == NULL)
		return (-1);
	while (i < sum)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
