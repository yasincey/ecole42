/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:45:49 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/07 20:33:51 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_len(char *abc)
{
	int	i;

	i = 0;
	while (abc[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	slen;
	unsigned int	dlen;

	slen = ft_len(src);
	dlen = ft_len(dest);
	i = 0;
	c = dlen;
	if (dlen >= size)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (slen + dlen);
}
