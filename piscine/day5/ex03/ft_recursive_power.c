/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:16:31 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/13 01:17:03 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("5^2 = %d\n", ft_recursive_power(5, 2));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("3^-1 = %d\n", ft_recursive_power(3, -1));
	printf("2^5 = %d\n", ft_recursive_power(2, 5));
}
*/
