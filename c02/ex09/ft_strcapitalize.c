/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:27:27 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/04 18:35:38 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_len(str);
	j = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (j == 1)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
