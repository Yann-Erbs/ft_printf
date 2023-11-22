/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:35:52 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/22 09:56:42 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_printpointer(va_arg(args, void *));
	return (len);
}

int ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	len;

	if (!str)
		return (0);
	len = 0;
	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
