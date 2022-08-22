/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   needshexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:06:46 by ahasagda          #+#    #+#             */
/*   Updated: 2022/06/25 21:07:02 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	reval;

	reval = 0;
	if (nbr == -2147483648)
	{
		reval += ft_writestring("-2147483648");
		return (reval);
	}
	else if (nbr < 0)
	{
		reval += ft_writechar('-');
		nbr = nbr * -1;
		reval += ft_putnbr(nbr);
	}
	else if (nbr >= 10)
	{
		reval += ft_putnbr(nbr / 10);
		reval += ft_writechar((nbr % 10) + 48);
	}
	else
		reval += ft_writechar((nbr % 10) + 48);
	return (reval);
}

int	ft_foru(unsigned int nbr)
{
	int	reval;

	reval = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		nbr = 4294967296 - nbr;
		ft_writechar('-');
	}
	if (nbr >= 10)
	{
		reval += ft_putnbr(nbr / 10);
	}
	reval += ft_writechar((nbr % 10) + 48);
	return (reval);
}

int	ft_lowerhexa(unsigned int nbr)
{
	int	val;

	val = 0;
	if (nbr >= 16)
		val += ft_lowerhexa(nbr / 16);
	return (ft_writechar("0123456789abcdef"[nbr % 16]) + val);
}

int	ft_upperhexa(unsigned int nbr)
{
	unsigned int	val1;

	val1 = 0;
	if (nbr >= 16)
		val1 += ft_upperhexa(nbr / 16);
	return (ft_writechar("0123456789ABCDEF"[nbr % 16]) + val1);
}
