/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:59:03 by atourner          #+#    #+#             */
/*   Updated: 2017/11/10 19:19:17 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strleng(char const *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((new = (char*)malloc(sizeof(char) * (ft_strleng(s1) + ft_strleng(s2)))))
	{
		if (s1)
			while (s1[i])
			{
				new[i] = s1[i];
				i++;
			}
		if (s2)
			while (s2[j])
			{
				new[i + j] = s2[j];
				j++;
			}
		new[i + j] = '\0';
		return (new);
	}
	return (NULL);
}
