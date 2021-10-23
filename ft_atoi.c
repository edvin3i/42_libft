/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 11:49:51 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/18 14:30:39 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_lllim(unsigned long long n, int sign)
{
	if (n >= LLONGMAX && sign == 1)
		return (-1);
	if (n >= LLONGMAX + 1 && sign == -1)
		return (0);
	return (1984);
}

int	ft_atoi(const char *str)
{
	int					sign;
	int					len;
	unsigned long long	result;

	sign = 1;
	result = 0;
	while (*str == 0x20 || (0x09 <= *str && *str <= 0x0d))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str) && 0x30 <= *str && *str <= 0x39)
	{
		result = result * 10 + *str - 0x30;
		str++;
		len++;
	}
	if (ft_check_lllim(result, sign) == 0 || ft_check_lllim(result, sign) == -1)
		return ((int)ft_check_lllim(result, sign));
	return ((int)result * sign);
}
