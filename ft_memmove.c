/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:22:16 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 17:23:26 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	char		*copy;

	dest = (char *)dst;
	copy = (char *)src;
	if (dst == src)
		return (dst);
	if (copy < dest)
	{
		while (len--)
			*(dest + len) = *(copy + len);
		return (dst);
	}
	while (len--)
			*dest++ = *copy++;
	return (dst);
}
/*
int main()
{
	char	a[] = "aleynA";
	char	b[] = "xaxdsdsds";

	printf("%s", ft_memmove(a, b, 5));	
}*/
