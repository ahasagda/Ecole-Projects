/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:14:59 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/28 14:25:00 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	isnegative;
	int	number;

	count = 0;
	isnegative = 1;
	number = 0;
	if (!str)
		return (0);
	while (str[count] == '\t' || str[count] == '\r' || str[count] == ' '
		|| str[count] == '\n' || str[count] == '\v' || str[count] == '\f')
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			isnegative = -1;
			count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{	
		number = number * 10 + str[count] - '0';
		count++;
	}
	return (number * isnegative);
}
/*
int main()
{
	char str1[] = "aley";
	char str2[] = "84938493";

	printf("%d",ft_atoi(str1));
	printf("%d",ft_atoi(str2));
	return (0);
}*/
