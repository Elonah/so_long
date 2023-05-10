/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejacquel <ejacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 00:52:20 by ejacquel          #+#    #+#             */
/*   Updated: 2023/05/10 04:34:36 by ejacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//bool ft_check_name(char *str, char *ber)
//{
//	int i = strlen(str);
//	int j = strlen(ber);

//	if (i < j)
//		return (0)
//	i -= j;
//	j = 0;
//	while (str[i + j])
//	{
//		if (str[i + j] != ber[j])
//			return (0)
//		j++;
//	}
//	return (1);
//}

//int		test(char *str)
//{
//	char *ptr;

//	ptr = strnstr(str, ".ber", strlen(str));
//	if (ptr == NULL || ptr != str + strlen(str) - 4)
//		return (0);
//	return (1);
//}

int	verif_format_carte(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	if (i > 4 && argv[--i] == 'r')
		if (argv[--i] == 'e')
			if (argv[--i] == 'b')
				if (argv[--i] == '.')
					return (0);
	return (1);
}

void	free_all(t_game *game)
{
	free
}

int	main(int argc, char **argv)
{
	int		fd;
	char	**map;
	int		i;

	if (argc != 2)
		return (1);
	if (verif_format_carte(argv[1]))
	{
		printf("pas bon");
		return (1);
	}
	close(fd);
	return (0);
}




//void	*mlx_ptr;
	//void	*win_ptr;

	//mlx_ptr = mlx_init();
	//win_ptr = mlx_new_window(mlx_ptr, 500, 500, "Test");
	//mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFFFFFF);

	//while (1)
	//	;
	//return(0);
