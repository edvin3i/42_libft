/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:44:35 by gbreana           #+#    #+#             */
/*   Updated: 2020/08/18 21:13:34 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	unsigned int tmp;

	if (nb < 0)
	{
		ft_putchar('-');
		tmp = nb * -1;
	}
	else
	{
		tmp = nb;
	}
	if (tmp >= 10)
	{
		ft_putnbr(tmp / 10);
	}
	tmp %= 10;
	tmp += 48;
	ft_putchar(tmp);
}
