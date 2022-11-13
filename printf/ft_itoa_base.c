/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:42:34 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:15 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ln(unsigned long nbr, int len)
{
	int				i;
	unsigned long	n;

	i = 1;
	n = (unsigned long)len;
	while (nbr >= n)
	{
		nbr /= n;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(unsigned long nbr, char *base)
{
	int		len;
	int		ln;
	char	*str;

	len = ft_strlen(base);
	ln = ft_ln(nbr, len);
	str = ft_calloc(sizeof(char), (ln + 1));
	while (ln)
	{
		ln--;
		str[ln] = base[nbr % len];
		nbr /= len;
	}
	return (str);
}
