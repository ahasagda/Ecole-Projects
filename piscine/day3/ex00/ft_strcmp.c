/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:49:09 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/12 17:46:53 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}
/*int	main()
{
	char	*a;
	char	*b;

	a = "aley";
   	b = "wjkjwk";	
	printf("after %d b", strcmp(a, b));
	printf(" before: %d", ft_strcmp(a, b));
}*/
