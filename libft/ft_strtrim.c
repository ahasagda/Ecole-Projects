/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:19:36 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/28 16:58:29 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

static int	search(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	start;
	size_t	end;	

	start = 0;
	while (s1[start] && search(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (search(s1[end - 1], set) && end > start)
		end--;
	new = (char *)malloc(sizeof(*s1) * ((end - start) + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = s1[start++];
	new[i] = 0;
	return (new);
}
/*
int main()
{
	char a[] = "alabbbala";
	char b[] = "aa";

	printf("%s", ft_strtrim(a,b));
}*/
