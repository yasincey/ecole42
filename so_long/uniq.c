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

int	str_search(char *str1, char *str2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (str1[i])
	{
		check = 0;
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_check(char *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == c)
			len++;
		i++;
	}
	return (len);
}

void	check_uniq(char **str)
{
	int	i;
	int	p;
	int	c;
	int	e;

	i = 0;
	c = 0;
	p = 0;
	e = 0;
	while (str[i])
	{
		c += ft_str_check(str[i], 'C');
		p += ft_str_check(str[i], 'E');
		e += ft_str_check(str[i], 'P');
		i++;
	}
	if (p > 1 || p == 0 || e > 1 || e == 0 || c < 1)
	{
		ft_printf("WRONG INPUT");
		exit(1);
	}
}

void	check_parmtr(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!str_search(str[i], "FPC01"))
		{
			ft_printf("WRONG INPUT");
			exit(1);
		}
		i++;
	}
}
