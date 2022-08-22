/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:05:48 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 16:37:11 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>

static int	ft_abs(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

static int	ft_intlen(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*return_val;
	int		is_neg;

	is_neg = nb < 0;
	len = ft_intlen(nb) + is_neg;
	return_val = (char *) malloc ((len + 1) * sizeof(*return_val));
	if (!return_val)
		return (NULL);
	return_val[len] = '\0';
	len--;
	while (len >= 0)
	{
		return_val[len] = ((char)ft_abs(nb % 10) + 48);
		nb /= 10;
		len--;
	}
	if (is_neg)
		return_val[0] = '-';
	return (return_val);
}
/*int main()
{
	printf("%s", ft_itoa(72));
	printf("%s", ft_itoa(-64));
}*/
