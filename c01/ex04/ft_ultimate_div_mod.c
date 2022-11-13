/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:23:53 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/03 15:17:46 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a,	int *b)
{
	int	data_a;
	int	data_b;

	if (*b != 0)
	{
	data_a = *a / *b;
	data_b = *a % *b;
	*a = data_a;
	*b = data_b;
	}
}
