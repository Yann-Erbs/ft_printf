/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:03:08 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/28 14:12:00 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	char	*result;

	if (n == 0)
		return (ft_strdup("0"));
	result = ft_calloc(unsigned_lenght(n) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (n)
	{
		result[unsigned_lenght(n) - 1] = (n % 10) + 48;
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
