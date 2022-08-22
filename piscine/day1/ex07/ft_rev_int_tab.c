/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:28:22 by ahasagda          #+#    #+#             */
/*   Updated: 2021/10/28 20:18:32 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp1;
	int	temp2;
	int	i;

	i = 0;
	while (size > 0 && i < size)
	{
		temp1 = tab[size - 1];
		temp2 = tab[i];
		tab[i] = temp1;
		tab[size - 1] = temp2;
		tab[i] = temp1;
		size--;
		i++;
	}
}
