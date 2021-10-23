/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dst_iter;
	const char	*src_iter;
	size_t		ds_iter;
	size_t		dst_len;

	dst_iter = dst;
	src_iter = src;
	ds_iter = dstsize;
	while (*dst_iter && ds_iter--)
		dst_iter++;
	dst_len = dst_iter - dst;
	ds_iter = dstsize - dst_len;
	if (!ds_iter)
		return (dst_len + ft_strlen(src));
	while (*src_iter)
	{
		if (ds_iter > 1)
		{
			*dst_iter++ = *src_iter;
			ds_iter--;
		}
		src_iter++;
	}
	*dst_iter = 0x00;
	return (dst_len + src_iter - src);
}
