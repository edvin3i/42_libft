/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_iter;
	char	*src_iter;

	if (!dst && !src)
		return (NULL);
	else if (dst < src)
	{
		dst_iter = (char *) dst;
		src_iter = (char *) src;
		while (len--)
			*dst_iter++ = *src_iter++;
	}
	else
	{
		dst_iter = (char *) dst + len;
		src_iter = (char *) src + len;
		while (len--)
			*--dst_iter = *--src_iter;
	}
	return (dst);
}
