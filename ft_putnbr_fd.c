/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:44:35 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/18 21:13:34 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	unsigned int tmp;

	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = num * -1;
	}
	else
	{
		tmp = num;
	}
	if (tmp >= 10)
	{
		ft_putnbr_fd(tmp / 10, fd);
	}
	tmp %= 10;
	tmp += 48;
	ft_putchar_fd(tmp, fd);
}
