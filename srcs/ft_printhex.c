/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:43:55 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/24 11:56:14 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printhex(unsigned long n, char c)
{
	char	*hex;
	int	i;

	i = 0;
	if (c == 'x')
		hex = ft_strdup("0123456789abcdef");
	else
		hex = ft_strdup("0123456789ABCDEF");
	if (n < 16)
	{
		i += write(1, &hex[n % 16], 1);
		free(hex);
		return (i);
	}
	i += ft_printhex(n / 16, c);
	i += write(1, &hex[n % 16], 1);
	free(hex);
	return (i);
}
