/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:22:31 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/04 18:19:28 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{	
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		i++;
		else
		{
			c = 0;
			break ;
		}
	}
	return (c);
}
