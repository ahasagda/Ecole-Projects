/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:04:17 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 18:19:59 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

int	wordcount(const char *s, char c)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	size_t	i;
	size_t	size;

	word = (char **)malloc(sizeof(char *) * wordcount(s, c));
	if (!word || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			size = 0;
			while (*s && *s != c && ++size)
				++s;
			word[i++] = ft_substr(s - size, 0, size);
		}
		else
			++s;
	}
	word[i] = 0;
	return (word);
}
/*
int main()
{
	char a[25] = "a,dlkh,cs,fgd";
	char **p = ft_split(a, ',');
	int i;
	int k = 0;

	i = wordcount(a, ',');
	while (i--)
	{
		printf("%s \n", p[k]); 
		k++;
	}
}*/
