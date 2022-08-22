/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   needs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:53:35 by ahasagda          #+#    #+#             */
/*   Updated: 2022/06/25 21:04:24 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_writechar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_writepercentage(int c)
{
	c += 0;
	write(1, "%", 1);
	return (1);
}

int	ft_writestring(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_writestring("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_wp(unsigned long long c)
{
	int	re;	

	re = 0;
	if (c >= 16)
		re += ft_wp(c / 16);
	return (ft_writechar("0123456789abcdef"[c % 16]) + re);
}

int	ft_forpointer(unsigned long long c)
{
	ft_writestring("0x");
	return (ft_wp(c) + 2);
}
