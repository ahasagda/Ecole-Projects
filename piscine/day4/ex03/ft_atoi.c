/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:08:17 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/12 19:44:42 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	is_negative;
	int	num;
	int	count_minus;

	count_minus = 0;
	is_negative = 1;
	num = 0;
	while (*str <= ' ')
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	if (count_minus % 2 == 1)
		is_negative = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * is_negative);
}

/*int main()
{
	printf("%d", ft_atoi("\t   ---+--374893"));
}*/
