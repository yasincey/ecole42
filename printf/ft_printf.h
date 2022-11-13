/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:43:17 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:17:56 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_decimal(int nbr);
int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_check(int i, const char *str, va_list arg);
int		ft_printf(const char *input, ...);
char	*ft_itoa_base(unsigned long nbr, char *i);
int		ft_ln(unsigned long nbr, int i);
int		ft_hexadecimal_lower(unsigned int nbr);
int		ft_unsigneddecimal(unsigned int nbr);
int		ft_check_parser(const char *nbr, va_list arg);
int		ft_hexadecimal_upper(unsigned int i);
int		ft_point_hexadecimal(void *input);

#endif
