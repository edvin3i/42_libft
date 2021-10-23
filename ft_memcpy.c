/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_iter;
	unsigned char	*src_iter;
	unsigned char	unsigned_c;

	dst_iter = (unsigned char *) dst;
	src_iter = (unsigned char *) src;
	unsigned_c = (unsigned char) c;
	if (dst_iter && src_iter)
	{
		while (n--)
		{
			*dst_iter = *src_iter;
			if (*dst_iter == unsigned_c)
			{
				return (++dst_iter);
			}
			dst_iter++;
			src_iter++;
		}
	}
	return (NULL);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_iter;
	unsigned char	*src_iter;

	dst_iter = (unsigned char *) dst;
	src_iter = (unsigned char *) src;
	if (!dst_iter || !src_iter)
		return (NULL);
	if (dst_iter && src_iter)
	{
		while (n--)
		{
			*dst_iter = *src_iter;
			dst_iter++;
			src_iter++;
		}
	}
	return (dst);
}