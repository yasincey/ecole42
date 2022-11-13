/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:41:42 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:11 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point_hexadecimal(void *input)
{
	unsigned long	adress;
	int				i;
	char			*str;

	adress = (unsigned long)input;
	i = ft_putstr("0x");
	str = ft_itoa_base(adress, "0123456789abcdef");
	i += ft_putstr(str);
	free(str);
	return (i);
}
