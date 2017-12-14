/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:02:44 by atourner          #+#    #+#             */
/*   Updated: 2017/11/12 13:45:31 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*act;

	act = lst;
	while (act)
	{
		(*f)(act);
		act = act->next;
	}
}
