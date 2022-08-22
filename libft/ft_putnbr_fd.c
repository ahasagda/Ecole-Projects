/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:43:30 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/29 18:05:38 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			a = n + '0';
			write(fd, &a, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			a = n % 10 + '0';
			write(fd, &a, 1);
		}
	}
}
/*
int main()
{
	int i = -266;
	int fd;

	fd = open("putnbr.txt", O_CREAT | O_WRONLY, 777);
	ft_putnbr_fd(i, fd);
	return (0);
}*/
