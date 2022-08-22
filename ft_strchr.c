/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:16:36 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 18:35:33 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char) c && *str != 0)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	else
		return (0);
	return (0);
}
/*
int main()
{
	const char *a = "Butun cicekler guzeldir.";
	char b = 'c';
	
	printf("%s",ft_strchr(a,b));
}*/
