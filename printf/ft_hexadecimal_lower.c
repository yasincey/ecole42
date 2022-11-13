/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:42:47 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:19:22 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal_lower(unsigned int i)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa_base(i, "0123456789abcdef");
	len += ft_putstr(str);
	free(str);
	return (len);
}
