/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:53:50 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/24 13:02:23 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printunsignednbr(unsigned int n)
{
	int	len;
	char	*tab;

	len = 0;
	tab = ft_uitoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
