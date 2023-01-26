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
#include "so_long.h"

void	ft_key_left(t_data **data)
{
	if ((*data)->map->str[((*data)->p_x)][((*data)->p_y - 1)] == '0')
	{
		(*data)->map->str[((*data)->p_x)][(*data)->p_y - 1] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x)][((*data)->p_y - 1)] == 'C')
	{
		(*data)->map->str[((*data)->p_x)][(*data)->p_y - 1] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->collectable--;
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x)][(*data)->p_y - 1] == 'E'\
	&& (*data)->collectable == 0)
	{
		(*data)->move++;
		print_win((*data)->move);
	}
	ft_pimage_update(data, LFT);
}

void	ft_key_down(t_data **data)
{
	if ((*data)->map->str[((*data)->p_x + 1)][(*data)->p_y] == '0')
	{
		(*data)->map->str[((*data)->p_x + 1)][(*data)->p_y] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x + 1)][((*data)->p_y)] == 'C')
	{
		(*data)->map->str[((*data)->p_x + 1)][(*data)->p_y] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->collectable--;
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x + 1)][(*data)->p_y] == 'E' \
	&& (*data)->collectable == 0)
	{
		(*data)->move++;
		print_win((*data)->move);
	}
	ft_pimage_update(data, DWN);
}

void	ft_key_right(t_data **data)
{
	if ((*data)->map->str[(*data)->p_x][((*data)->p_y + 1)] == '0')
	{
		(*data)->map->str[(*data)->p_x][((*data)->p_y + 1)] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->move++;
	}
	else if ((*data)->map->str[(*data)->p_x][((*data)->p_y + 1)] == 'C')
	{
		(*data)->map->str[(*data)->p_x][((*data)->p_y + 1)] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->collectable--;
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x)][(*data)->p_y + 1] == 'E' \
	&& (*data)->collectable == 0)
	{
		(*data)->move++;
		print_win((*data)->move);
	}
	ft_pimage_update(data, RGT);
}

void	ft_key_up(t_data **data)
{
	if ((*data)->map->str[((*data)->p_x - 1)][(*data)->p_y] == '0')
	{
		(*data)->map->str[((*data)->p_x - 1)][(*data)->p_y] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x - 1)][((*data)->p_y)] == 'C')
	{
		(*data)->map->str[((*data)->p_x - 1)][(*data)->p_y] = 'P';
		(*data)->map->str[(*data)->p_x][(*data)->p_y] = '0';
		(*data)->collectable--;
		(*data)->move++;
	}
	else if ((*data)->map->str[((*data)->p_x - 1)][(*data)->p_y] == 'E' \
	&& (*data)->collectable == 0)
	{
		(*data)->move++;
		print_win((*data)->move);
	}
	ft_pimage_update(data, UP);
}

int	key_event(int keycode, t_data **data)
{
	static int	i;
	char		*t;
	char		*nbr;

	find_player(data, (*data)->map->row, (*data)->map->column, \
	(*data)->map->str);
	if (keycode == 0 || keycode == 123)
		ft_key_left(data);
	if (keycode == 1 || keycode == 125)
		ft_key_down(data);
	if (keycode == 2 || keycode == 124)
		ft_key_right(data);
	if (keycode == 13 || keycode == 126)
		ft_key_up(data);
	put_image((*data));
	if (keycode == 53)
		map_format_error(-1);
	if ((*data)->move != (*data)->movenew)
		printf_move(data);
	nbr = ft_itoa((*data)->move);
	t = ft_strjoin("MOVE : ", nbr);
	mlx_string_put((*data)->mlx, (*data)->win, 10, 20, (*data)->move * 1000, t);
	free(nbr);
	free(t);
	return (0);
}
