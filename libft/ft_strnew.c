/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:54:08 by atourner          #+#    #+#             */
/*   Updated: 2017/11/12 17:34:38 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if ((new = (char*)malloc(sizeof(char) * size + 1)))
	{
		i = 0;
		while (i < size)
		{
			new[i] = '\0';
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
