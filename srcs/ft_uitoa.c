/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:03:08 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/24 13:14:25 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	char	*result;
	int	len;	

	len = unsigned_lenght(n);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (n)
	{
		result[len - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

int	unsigned_lenght(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
