/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:09:52 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 17:36:25 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void		*a;
	size_t		i;

	i = size * count;
	a = (void *)malloc(count * size);
	if (!a)
		return (NULL);
	ft_bzero (a, i);
	return (a);
}

/*int main()
{
	int *i = calloc(5, sizeof(int));

	if(i)
		printf("there is i");
	if(!i)
		printf("kdkf"); 
}*/
