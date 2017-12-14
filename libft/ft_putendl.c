/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:52:07 by atourner          #+#    #+#             */
/*   Updated: 2017/11/10 19:03:29 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		ft_strleng(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void			ft_putendl(char const *s)
{
	if (s)
		write(1, s, ft_strleng(s));
	write(1, "\n", 1);
}
