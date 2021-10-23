/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 03:39:28 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/16 03:57:58 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				result;
	unsigned char	*u_str1;
	unsigned char	*u_str2;

	u_str1 = (unsigned char *) str1;
	u_str2 = (unsigned char *) str2;
	result = 0;
	while (n--)
	{
		if (*u_str1 != *u_str2)
		{
			result = *u_str1 - *u_str2;
			break ;
		}
		else if (*u_str1 == 0)
		{
			result = 0;
			break ;
		}
		u_str1++;
		u_str2++;
	}
	return (result);
}
