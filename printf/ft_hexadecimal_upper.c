/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:42:43 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:19 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal_upper(unsigned int i)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa_base(i, "0123456789ABCDEF");
	len += ft_putstr(str);
	free(str);
	return (len);
}
