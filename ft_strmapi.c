/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:58:55 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 14:10:58 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*static char	f(unsigned int i, char l)
{
	l = l + 32;
	return (l);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*a;

	len = ft_strlen(s);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (s[i])
		{
			a[i] = (*f)(i, s[i]);
			i++;
		}
	}
	a[i] = '\0';
	return (a);
}
/*int main()
{
	char 	*a = "dsdsd";
	char	*b;

	b = ft_strmapi(a, f);

	printf("%s", b);
}*/
