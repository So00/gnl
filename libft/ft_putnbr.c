/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:02:06 by atourner          #+#    #+#             */
/*   Updated: 2017/11/12 18:50:39 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		ft_power(int n)
{
	if (n == -1)
		return (1);
	if (n == 0)
		return (1);
	return (10 * ft_power(n - 1));
}

void			ft_putnbr(int n)
{
	int		len;
	int		tmp;

	len = 0;
	tmp = n;
	if (n < 0)
		write(1, "-", 1);
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	len = ft_power(len - 1);
	while (len > 0)
	{
		tmp = ((n - n % len) / len);
		tmp = ((tmp < 0) ? (-tmp) + '0' : tmp + '0');
		write(1, &tmp, 1);
		n %= len;
		len /= 10;
	}
}
