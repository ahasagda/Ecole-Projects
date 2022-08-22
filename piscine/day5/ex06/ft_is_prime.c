/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:23:15 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/13 01:24:39 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (num != nb)
	{
		if (nb % num == 0)
		{
			return (0);
		}
		num++;
	}
	return (1);
}
/*
int		main(void)
{
	printf(“%d\n”, ft_is_prime(2));
	printf(“%d\n”, ft_is_prime(4));
}
*/
