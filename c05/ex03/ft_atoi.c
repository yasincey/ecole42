/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:45:10 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/08 16:48:35 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_space(char *str, int *c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*c = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	d;

	d = ft_space(str, &a);
	b = 0;
	while (str[a] && str[a] >= 48 && str[a] <= 57)
	{
		b *= 10;
		b += (str[a] - 48);
		a++;
	}
	b *= d;
	return (b);
}
