/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:43:29 by gbreana           #+#    #+#             */
/*   Updated: 2021/10/25 09:37:59 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_chardup(const char *ch)
{
	char	*res;

	res = (char *) malloc(sizeof (ch) + 1);
	if (!res)
		return (NULL);
	res[0] = ch[0];
	res[1] = '\0';
	return (res);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	end;
	char			*result;
	char			*res_iter;
	size_t			slen;

	if (!str)
		return (NULL);
	slen = (size_t)ft_strlen(str);
	if (slen < len)
		len = slen;
	if ((start >= (unsigned int)slen) || !len)
		return (ft_strdup(""));
	if (len == 1)
		return (ft_chardup(&str[start]));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	res_iter = result;
	end = start + len - 1;
	while (start <= end)
		*res_iter++ = str[start++];
	*res_iter = 0x00;
	return (result);
}
