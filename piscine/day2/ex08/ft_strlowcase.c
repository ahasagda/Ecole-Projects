/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:16:50 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/04 13:23:08 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if ((str[l] >= 'A') && (str[l] <= 'Z'))
			str[l] += 'a' - 'A';
		l++;
	}
	return (str);
}
/*char	*ft_strlowcase(char *str);

int main(void)
{
	char	a[] = "alEyNa";
	char	*apoint;
	apoint = a;

	char	b[] = "elma";
	char	*bpoint;
	bpoint = b;
	
	char	space[] = " ";
	char	*spcpoint;
	spcpoint = space;

	printf("%s \n", apoint);
	printf("%s \n", ft_strlowcase(apoint));
	printf("%s \n", bpoint);
	printf("%s \n", ft_strlowcase(bpoint));
	printf("empty: %s", ft_strlowcase(spcpoint));
}*/
