/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:35:52 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/14 11:17:42 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	printf;

	printf = 0;
	if (format == 'c')
		printf = ft_putchar(va_arg(args, int));
	return (printf);
		
}

int ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	printf;

	i = 0;
	va_start(args, str);
	printf = 0;
	while(str[i])
	{
		if (str[i] == '%')
			printf += ft_formats(args, str[i + 1]);	
		i++;
	}
	return (printf);
}

int main()
{
	char c = 'c';
	ft_printf("&c", c);
	return (0);
}
