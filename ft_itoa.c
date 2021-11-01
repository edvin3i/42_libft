/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int num)
{
	int	len;

	len = 0;
	if (num < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nbrlen;
	char	*result;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbrlen = ft_nbrlen(n);
	result = (char *)malloc(sizeof(char) * nbrlen + 1);
	if (!result)
		return (NULL);
	result[nbrlen] = 0x00;
	if (n < 0)
	{
		n = n * -1;
		result[0] = '-';
	}
	while (n)
	{
		result[--nbrlen] = n % 10 + 0x30;
		n = n / 10;
	}
	return (result);
}
