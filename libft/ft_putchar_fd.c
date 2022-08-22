/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:53:45 by ahasagda          #+#    #+#             */
/*   Updated: 2022/04/28 19:21:43 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main(void)
{
	char a;
	int fd;

	a = 'c';
	fd = open("aleyna.txt" , O_CREAT | O_WRONLY, 777);
	ft_putchar_fd(a, fd);
	printf("%d", fd);
	return (0);
}*/
