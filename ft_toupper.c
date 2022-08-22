/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:03:46 by ahasagda          #+#    #+#             */
/*   Updated: 2022/03/31 18:01:49 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a = a - 32;
	return (a);
}

/*int main(void)
{
	printf("%c", ft_toupper('k'));
	printf("%c", ft_toupper('K'));
	return (0);
}*/
