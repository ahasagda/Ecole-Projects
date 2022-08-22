/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:47:55 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/28 12:56:19 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{	
	int	i;

	i = ft_strlen(str) + 1;
	while (i--)
		if (*(str + i) == (char) c)
			return ((char *) str + i);
	return (0);
}
/*
int main()
{
	const char *a = "aab bcd ";
	char b = 'b';
	printf("%s", strrchr(a,b));

}*/
