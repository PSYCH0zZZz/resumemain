#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	sum;
	int	*arr;

	i = 0;
	sum = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sum * sizeof(arr));
	while (i < sum)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	return (arr);
}
