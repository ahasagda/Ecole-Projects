/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:25:57 by ahasagda          #+#    #+#             */
/*   Updated: 2021/11/02 03:59:46 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (b == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] -= 'a' - 'A';
			b++;
		}
		else if (b > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
			str[a] += 'a' - 'A';
		else if ((str[a] < '0') || (str[a] > '9' && str[a] < 'A')
			|| (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			b = 0;
		else
			b++;
		a++;
	}
	return (str);
}
