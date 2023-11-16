/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:35:52 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/16 11:55:58 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_formats(va_list args, const char format)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
}

int ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;

	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			ft_formats(args, str[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (0);
}
