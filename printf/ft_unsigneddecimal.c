/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneddecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:42:09 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:07 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigneddecimal(unsigned int nbr)
{
	int		len;
	char	*str;

	str = ft_itoa_base(nbr, "0123456789");
	len = ft_putstr(str);
	free(str);
	return (len);
}
