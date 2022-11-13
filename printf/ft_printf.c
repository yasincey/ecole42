/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:41:58 by yceylan           #+#    #+#             */
/*   Updated: 2022/11/11 16:15:05 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int i, const char *str, va_list arg)
{
	int	len;

	len = 0;
	if (str[i] == 's')
		len = ft_putstr(va_arg(arg, char *));
	else if (str[i] == 'c')
		len = ft_putchar(va_arg(arg, int));
	else if (str[i] == 'd' || str[i] == 'i')
		len = ft_decimal(va_arg(arg, int));
	else if (str[i] == 'u')
		len = ft_unsigneddecimal(va_arg(arg, unsigned int));
	else if (str[i] == 'x')
		len = ft_hexadecimal_lower(va_arg(arg, unsigned int));
	else if (str[i] == 'p')
		len = ft_point_hexadecimal(va_arg(arg, void *));
	else if (str[i] == 'X')
		len = ft_hexadecimal_upper(va_arg(arg, size_t));
	else if (str[i] == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_is_argument(char c)
{	
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || \
c == 'x' || c == 'X' || c == 'u' || c == 'p' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_check_parser(const char *str, va_list arg)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (ft_is_argument(str[i]))
				len += ft_check(i, str, arg);
			else if (str[i])
				len += ft_putchar(str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list		arg;
	int			len;

	len = 0;
	va_start(arg, input);
	len = ft_check_parser(input, arg);
	va_end(arg);
	return (len);
}
