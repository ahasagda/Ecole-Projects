/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:24:08 by ahasagda          #+#    #+#             */
/*   Updated: 2021/10/28 20:53:17 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	nextindex;

	index = 0;
	while (index < size)
	{
		nextindex = index + 1;
		while (nextindex < size)
		{
			if (tab[index] > tab[nextindex])
			{
				temp = tab[index];
				tab[index] = tab[nextindex];
				tab[nextindex] = temp;
			}
			nextindex++;
		}
		index++;
	}
}
