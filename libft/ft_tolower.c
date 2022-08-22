/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:49:52 by ahasagda          #+#    #+#             */
/*   Updated: 2022/03/31 18:06:09 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		a = a + 32;
	return (a);
}

/*int main()
{
	printf("%c,%c,%d", ft_tolower('K'), ft_tolower('a'), ft_tolower('8'));
}*/
