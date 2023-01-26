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

void	print_win(int nbr)
{

	ft_printf("\e[0;31m _             _   _  _  _   _           _    ");
  	ft_printf("(_)           (_) (_)(_)(_) (_) _       (_)   ");
  	ft_printf("(_)           (_)    (_)    (_)(_)_     (_)   ");
  	ft_printf("(_)     _     (_)    (_)    (_)  (_)_   (_)   ");
  	ft_printf("(_)   _(_)_   (_)    (_)    (_)    (_)_ (_)   ");
  	ft_printf("(_)  (_) (_)  (_)    (_)    (_)      (_)(_)   ");
  	ft_printf("(_)_(_)   (_)_(_)  _ (_) _  (_)         (_)   ");
    ft_printf("(_)       (_) (_) (_)(_)(_) (_)         (_)   ");
	ft_printf("(((o(*ﾟ▽ﾟ*)o))) TOTAL MOVE = %d\n\e[0m", nbr);
	exit(0);
}

int	map_format_error(int err)
{
	if (err == 1)
		ft_printf("\e[0;31m (;¬_¬) MAP FORMAT ERROR\e[0m");
	else
	{
		ft_printf("\e[0;31m ¯\\_༼ ಥ ‿ ಥ ༽_/¯ YOU GIVE UP\e[0m");
		exit(0);
	}
	exit(1);
}

void	printf_move(t_data **data)
{
	if((*data)->move % 2 == 0)
	ft_printf ("\e[0;33m ᕕ(╯°□°)ᕗ MOVE : %d\n\e[0m", (*data)->move);
	else
	ft_printf ("\e[0;33m ᕗ(╯°□°)ᕕ MOVE : %d\n\e[0m", (*data)->move);

	(*data)->movenew = (*data)->move;
}
