/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:38:51 by ahasagda          #+#    #+#             */
/*   Updated: 2022/06/26 18:04:25 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	transformvar(va_list arg_list, const char format)
{
	int	process;

	process = 0;
	if (format == 'c')
		process += ft_writechar(va_arg(arg_list, int));
	else if (format == 's')
		process += ft_writestring(va_arg(arg_list, char *));
	else if (format == 'p')
		process += ft_forpointer(va_arg(arg_list, unsigned long long));
	else if (format == 'd' || format == 'i')
		process += ft_putnbr(va_arg(arg_list, int));
	else if (format == 'u')
		process += ft_foru(va_arg(arg_list, unsigned int));
	else if (format == 'x')
		process += ft_lowerhexa(va_arg(arg_list, unsigned int));
	else if (format == 'X')
		process += ft_upperhexa(va_arg(arg_list, unsigned int));
	else if (format == '%')
		process += ft_writepercentage(va_arg(arg_list, int));
	return (process);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		process;

	va_start(arg_list, str);
	process = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '%')
		{
			process += ft_writechar('%');
			str += 2;
		}
		else if (*str == '%')
		{
			process += transformvar(arg_list, *(str + 1));
			str += 2;
		}
		else
		{
			process += ft_writechar(*str);
			str++;
		}
	}
	va_end(arg_list);
	return (process);
}
