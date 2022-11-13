/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:16:16 by yceylan           #+#    #+#             */
/*   Updated: 2022/10/23 17:16:16 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_char_set(char a, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		first;
	int		last;
	char	*result;

	i = 0;
	first = 0;
	last = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[first] && is_char_set(s1[first], set))
		first++;
	if (s1[first] == '\0')
	{
		result = ft_strdup("");
		return (result);
	}
	last = ft_strlen(s1) - 1;
	while (s1[last] >= 0 && is_char_set(s1[last], set))
		last--;
	last = last - first + 1;
	result = ft_substr(s1, first, last);
	return (result);
}
