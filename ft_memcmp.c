/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_iter;
	unsigned char	*s2_iter;
	size_t			result;

	s1_iter = (unsigned char *)s1;
	s2_iter = (unsigned char *)s2;
	result = 0;
	if (s1 == s2)
		return (result);
	while (result < n)
	{
		if (*s1_iter != *s2_iter)
			return (*s1_iter - *s2_iter);
		s1_iter++;
		s2_iter++;
		result++;
	}
	return (0);
}
