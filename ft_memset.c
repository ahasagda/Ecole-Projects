/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:17:34 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 14:05:47 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*aley;
	size_t				i;

	aley = (unsigned char *)b;
	i = 0;
	while (len > i)
	{
		aley[i] = c;
		i++;
	}
	return (b);
}
/*int main()
{
	char aley[] = "aakld";
	printf("%s \n", ft_memset(aley, 'k', 5));
    printf("%s", memset(aley, 'k', 5));
}*/
