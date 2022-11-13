/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:41:02 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/04 12:53:06 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{	
	int	b;

	b = 0;
	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
