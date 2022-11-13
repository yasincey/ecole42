/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:55:30 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/03 13:56:58 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	tmp;
	int	i;

	i = 0;
	size--;
	while (size >= i)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		size --;
	i++;
	}	
}
