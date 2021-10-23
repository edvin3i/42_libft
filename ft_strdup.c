/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	src_size;
	char	*dest;
	char	*iter;

	src_size = ft_strlen(src) + 1;
	dest = malloc(src_size);
	iter = dest;
	if (dest == NULL)
		return (NULL);
	while (*src)
	{
		*iter = *src;
		iter++;
		src++;
	}
	*iter = 0;
	return (dest);
}
