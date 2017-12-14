/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:57:46 by atourner          #+#    #+#             */
/*   Updated: 2017/11/10 19:00:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_create(char *nb_to_char, int len, int n)
{
	if (n == 0)
		nb_to_char[0] = '0';
	else
	{
		len--;
		if (n < 0)
		{
			nb_to_char[0] = '-';
			len++;
		}
		while (n)
		{
			nb_to_char[len] = ((n < 0) ? -(n % 10) : (n % 10)) + '0';
			n /= 10;
			len--;
		}
	}
}

char			*ft_itoa(int n)
{
	int		len;
	char	*nb_to_char;
	int		cpy;

	len = 0;
	cpy = n;
	while (cpy)
	{
		cpy /= 10;
		len++;
	}
	if ((nb_to_char = (char*)malloc(sizeof(char) * (len + 2))))
	{
		ft_create(nb_to_char, len, n);
		if (len == 0)
			nb_to_char[1] = '\0';
		else if (n < 0)
			nb_to_char[len + 1] = '\0';
		else
			nb_to_char[len] = '\0';
		return (nb_to_char);
	}
	return (NULL);
}
