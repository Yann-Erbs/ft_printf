/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:37:19 by yerbs             #+#    #+#             */
/*   Updated: 2023/11/29 15:39:24 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

int		ft_printpointer(void *ptr);
int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printhex(unsigned long n, char c);
int		ft_printpercent(void);
int		ft_printunsignednbr(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		unsigned_lenght(unsigned int n);

#endif
