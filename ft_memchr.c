/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_iter;
	char	chr_c;
	size_t	n_iter;

	s_iter = (char *)s;
	chr_c = (char)c;
	n_iter = 0;
	while (n_iter < n)
	{
		if (*s_iter == chr_c)
			return (s_iter);
		s_iter++;
		n_iter++;
	}
	return (NULL);
}
