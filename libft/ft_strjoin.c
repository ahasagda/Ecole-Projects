/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:26:41 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 18:09:57 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*a;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	a = (char *)malloc(sizeof(*a) * (len + 1));
	if (!a)
		return (NULL);
	while (s1[++i])
		a[i] = s1[i];
	while (s2[j])
		a[i++] = s2[j++];
	a[i] = '\0';
	return (a);
}
/*int main ()
{
	const char a[10] = "aley";
	const char b[10] = "na";

	printf("%s", ft_strjoin(a, b));
}*/
