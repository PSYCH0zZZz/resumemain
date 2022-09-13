#ifndef BSQ_H
# define BSQ_H

int		ft_strlen(char	*str);
char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);
int		count_new_line(char	*filename);
char	*parse_to_string(char	*filename);
char	**matrix(char	*str, int size);
int		**create_another_matr(char	**strs, int	size, char	*symbols);
void	fill_first(char	**strs, int	**field, char	*symbols, int	size);
int		check_length(char **strs, int	size);
int		ft_check_1(char **arr);
int		ft_check_2(char **arr, int	size);
int		ft_check_3(char **arr);
int		ft_check_4(char **arr, int size);
int		ft_main_check(char **arr, int	size);
void	ft_fill_matr(char **strs, int **field, char *symbols, int size);
int		find_max(int **field, int	size, char	**strs);
int		min(int a, int b, int c);
void	ft_putstr(char	*str);
int		*find_row_col(int	**field, int	size, int	max, char	**strs);
void	ft_risovalka(char **matr, int	*coop, int max, char *dest);
void	print(char	**strs, int	size);
void	prob(char	*filename, char	*str, char	**strs, int		**field);
void	free_mem_field(int	**field, int	size);
void	free_mem_strs(char	**strs, int	size);
void	standart_input(char	*filename, char	*str, char	**strs, int	**field);
void	free_mem_str(char	*str);

#endif