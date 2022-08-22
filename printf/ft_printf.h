/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahasagda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:10:13 by ahasagda          #+#    #+#             */
/*   Updated: 2022/06/26 18:10:18 by ahasagda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int	ft_writechar(int c);
int	ft_writepercentage(int c);
int	ft_writestring(char *str);
int	ft_wp(unsigned long long c);
int	ft_forpointer(unsigned long long c);
int	ft_putnbr(int nbr);
int	ft_foru(unsigned int nbr);
int	ft_lowerhexa(unsigned int nbr);
int	ft_upperhexa(unsigned int nbr);
int	ft_printf(const char *str, ...);

#endif
