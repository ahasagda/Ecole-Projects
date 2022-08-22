/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:02:16 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/28 19:53:17 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdio.h>
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*int main()
{
	printf("%d", ft_isascii(0x83));//Keep in mind that 0x80 = 80h = 128
	printf("%d", ft_isascii('K'));
}*/
