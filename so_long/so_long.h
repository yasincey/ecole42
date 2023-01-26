/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:12:32 by yceylan           #+#    #+#             */
/*   Updated: 2023/01/26 17:12:34 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SO_LONG_H
# define SO_LONG_H

# include "./mlx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# include "./get/get_next_line.h"
# include "./ft_printf/ft_printf.h"

# define UP "./textures/up.xpm"
# define DWN "./textures/down.xpm"
# define LFT "./textures/left.xpm"
# define RGT "./textures/right.xpm"
# define WLL "./textures/wall3.xpm"
# define EXT "./textures/key.xpm"
# define CLT "./textures/chest.xpm"
# define BCK "./textures/wall2.xpm"

typedef struct t_map
{
	int		column;
	int		row;
	char	**str;
}t_map;

typedef struct s_data
{
	void	*mlx;
	void	*win;
	int		size_x;
	int		size_y;
	int		p_x;
	int		p_y;
	int		img_x;
	int		img_y;
	int		collectable;
	int		move;
	int		movenew;
	void	**img;
	t_map	*map;
}t_data;
void	print_win(int nbr);
int		map_format_error(int code);
void	printf_move(t_data **data);
int		ft_str_check(char *str, char c);
int		str_search(char *str1, char *str2);
int		ft_path(char **str, int row, int column);
int		key_event(int keycode, t_data **data);
void	ft_path_find(char **str, int row, int column, t_data **data);
void	check_matris(t_map **struck, char *str);
void	check_wall(int column, int row, char **strmap);
void	check_uniq(char **str);
void	check_parmtr(char **str);
void	ft_key_left(t_data **data);
void	ft_key_down(t_data **data);
void	ft_key_right(t_data **data);
void	ft_key_up(t_data **data);
void	put_image(t_data *data);
void	find_player(t_data **data, int row, int column, char **str);
void	find_pos(t_data **data, char c, char **str);
void	support(t_data **data);
void	support2(t_data **data);
void	is_ber(char *str);
void	put_image_sup(t_data *data, int i, int j);
void	ft_pimage_update(t_data **data, char *str);
char	**take_array(int column, int row, char *str);
void	let_free(char **str);

#endif
