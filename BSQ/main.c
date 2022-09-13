#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"

char	*ft_simbol(char	**arr)
{
	int			j;
	static char	dst[3];

	j = 0;
	while (arr[0][j])
		j++;
	dst[0] = arr[0][j - 3];
	dst[1] = arr[0][j - 2];
	dst[2] = arr[0][j - 1];
	return (dst);
}

void	print(char	**strs, int	size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		ft_putstr (strs[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	prob(char	*filename, char	*str, char	**strs, int		**field)
{
	int		max;
	int		*coop;
	char	*symbols;
	int		size;

	size = count_new_line(filename);
	str = parse_to_string(filename);
	strs = matrix(str, size);
	free_mem_str(str);
	if (!ft_main_check(strs, size))
	{
		free_mem_strs(strs, size);
		ft_putstr("map error\n");
		return ;
	}
	symbols = ft_simbol(strs);
	field = create_another_matr(strs, size, symbols);
	max = find_max(field, size, strs);
	coop = find_row_col(field, size, max, strs);
	free_mem_field(field, size);
	ft_risovalka(strs, coop, max, symbols);
	print(strs, size);
	free_mem_strs(strs, size);
}

void	choose(int	count, int	argc_count)
{
	if (count != argc_count)
		write(1, "\n", 1);
}

int	main(int	argc, char	**argv)
{
	char	*str;
	char	**strs;
	int		**field;
	int		i;

	str = NULL;
	strs = NULL;
	field = NULL;
	if (argc == 1)
		standart_input("example", str, strs, field);
	else if (argc == 2)
		prob(argv[1], str, strs, field);
	else
	{
		i = 1;
		while (i < argc)
		{
			prob(argv[i++], str, strs, field);
			choose(i, argc);
		}
	}
	return (0);
}
