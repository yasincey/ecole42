/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:16:00 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/09 14:57:38 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(int nbr, char *base)
{
	write (1, &base[nbr], 1);
}

void	ft_calculate(long a, int i, char *base)
{	
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
		ft_calculate(a, i, base);
	}
	else if (a > i)
	{
		ft_calculate((a / i), i, base);
		ft_calculate((a % i), i, base);
	}
	else
		ft_write(a, base);
}

int	len(char *a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (a[i] != 0)
	{
		while (a[j] != 0)
		{
			if (a[j] == '+' || a[j] == '-')
				return (0);
			else if (a[i] == a[j])
				return (0);
			else if (a[i] != a[j])
				j++;
		}
		i++;
		j = i + 1;
	}
	if (i == 1 || i == 0)
		return (0);
	else
		return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	x;

	x = nbr;
	i = len(base);
	if (i == 0)
		write(1, "\n", 1);
	else
		ft_calculate(x, i, base);
}
