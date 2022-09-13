#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (0);
		i++;
	}
	return (0);
}

void	sort(int argc, char **argv)
{
	int		f;
	int		i;
	char	*b;

	f = 0;
	while (f < argc - 2)
	{
		f = 0;
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
			{
				b = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = b;
			}
			else
				f++;
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
