/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:22:59 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 16:30:42 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
/*
int main()
{
	char source[] = "heyy!";
	const char *destination;

	destination = ft_strdup(source);
	printf("%s", destination);
}*/
