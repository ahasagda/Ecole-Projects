/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:10:36 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 16:46:55 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (len >= l)
		len = l;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{	
		while (i < len)
			dest[i++] = s[start++];
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	const char *a;
	a = "aleyna";

	printf("\n %s", ft_substr(a, 2, 4));
}*/
