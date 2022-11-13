/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:16:11 by yceylan           #+#    #+#             */
/*   Updated: 2022/10/23 17:16:12 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*rslt;
	int		len;

	i = 0;
	rslt = (char *)s;
	len = (ft_strlen(s));
	while (i <= len)
	{
		if (rslt[len] == (char)c)
			return (rslt + len);
		len--;
	}
	return (NULL);
}
