/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 02:43:30 by ahasagda          #+#    #+#             */
/*   Updated: 2021/10/31 17:55:09 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		if ((str[h] < 'A') || (str[h] > 'Z'))
			return (0);
		h++;
	}
	return (1);
}