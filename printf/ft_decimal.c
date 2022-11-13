/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:42:51 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:27 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int nbr)
{
	int		len;
	char	*str;
	long	n;

	len = 0;
	n = nbr;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	str = ft_itoa_base(n, "0123456789");
	len += ft_putstr(str);
	free(str);
	return (len);
}
