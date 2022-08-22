/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:38:50 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 18:26:44 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	a = (void *)s;
	while (i < n)
	{	
		if (a[i] == (char)c)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *a;

	a = "aabbcc";
	printf("%s", ft_memchr(a,'b',6));

}*/
