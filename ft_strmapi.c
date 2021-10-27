/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:06:14 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/21 10:54:19 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	str_len;
	char			*result;

	if (!s || !f)
		return (NULL);
	index = 0;
	str_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (NULL);
	while (index < str_len)
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = 0x00;
	return (result);
}
