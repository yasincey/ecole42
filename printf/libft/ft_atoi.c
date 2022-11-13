/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:12:01 by yceylan           #+#    #+#             */
/*   Updated: 2022/10/23 17:12:04 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	int		sing;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		if (result > 2147483647 && sing == 1)
			return (-1);
		else if (result > 2147483648 && sing == -1)
			return (0);
		i++;
	}
	return (sing * result);
}
