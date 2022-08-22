/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:25:52 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/26 15:08:33 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stddef.h>
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}

/*int main()
{
	char x[] = "xyz";
	//bzero(x, sizeof(char));
	ft_bzero(x, sizeof(char));
	printf("%s", x);
}*/
