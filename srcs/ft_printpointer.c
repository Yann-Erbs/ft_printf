/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:49:11 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/22 09:52:34 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_printstr("0x0");
	else
	{
		len = ft_printstr("0x");
		//len = ft_printhex((unsigned long)ptr, 'x');
	}
	return (len);
}
