/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan < yceylan@student.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:28:48 by yceylan           #+#    #+#             */
/*   Updated: 2022/04/13 17:02:55 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	(void)ac;
	while (av[0][i])
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
