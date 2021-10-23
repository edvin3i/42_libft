/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 03:39:28 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/16 03:57:58 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ndl_len;

	ndl_len = ft_strlen(needle);
	if (!ndl_len)
		return ((char *)haystack);
	while (len-- >= ndl_len)
	{
		if (!ft_memcmp(haystack, needle, ndl_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
