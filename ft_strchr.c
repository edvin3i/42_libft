/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char	chr_c;

	chr_c = (char) c;
	while (*src != chr_c)
	{
		if (!*src)
			return (NULL);
		src++;
	}
	return ((char *)src);
}
