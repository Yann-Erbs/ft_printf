/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:32:17 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/22 09:07:40 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printnbr(int n)
{
	int	len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
