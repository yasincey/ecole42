/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:14:33 by yceylan           #+#    #+#             */
/*   Updated: 2022/10/23 17:14:33 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (!dst && !src)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dst < src)
		while (len--)
			*dstc++ = *srcc++;
	else
	{
		srcc = (unsigned char *)src + (len -1);
		dstc = (unsigned char *)dst + (len -1);
		while (len--)
			*dstc-- = *srcc--;
	}
	return (dst);
}
