/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:11:53 by atourner          #+#    #+#             */
/*   Updated: 2017/11/10 20:15:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strleng(char *src)
{
	int		len;

	len = 0;
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}

char			*ft_strdup(char *src)
{
	char	*cpy;
	int		act;

	act = 0;
	if ((cpy = (char*)malloc(sizeof(char) * (ft_strleng(src) + 1))))
		while (src[act])
		{
			cpy[act] = src[act];
			act++;
		}
	if (cpy)
		cpy[act] = '\0';
	return (cpy);
}
