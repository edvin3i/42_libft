/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:12:32 by gbreana           #+#    #+#             */
/*   Updated: 2021/10/21 15:43:41 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_iter;
	char	*src_iter;

	dst_iter = (char *) dst;
	src_iter = (char *) src;
	if (!dst_iter && !src_iter)
		return (NULL);
	while (n--)
	{
		*dst_iter = *src_iter;
		dst_iter++;
		src_iter++;
	}
	return (dst);
}
