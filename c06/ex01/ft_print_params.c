/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:05:39 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/13 18:50:18 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	b;

	b = 1;
	while (b < ac)
	{
		i = 0;
		while (av[b][i])
		{
			write(1, &av[b][i], 1);
			i++;
		}
		b++;
		write(1, "\n", 1);
	}
	return (0);
}
