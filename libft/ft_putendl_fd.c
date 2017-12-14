/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:10:27 by atourner          #+#    #+#             */
/*   Updated: 2017/11/12 19:49:14 by atourner         ###   ########.fr       */
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

void			ft_putendl_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strleng(s));
	write(fd, "\n", 1);
}
