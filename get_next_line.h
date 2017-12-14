/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 12:10:53 by atourner          #+#    #+#             */
/*   Updated: 2017/12/09 16:52:40 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE 32

int					get_next_line(const int fd, char **line);

typedef struct		s_sav_str
{
	char	*buff;
	size_t	len;
}					t_sav_str;

#endif
