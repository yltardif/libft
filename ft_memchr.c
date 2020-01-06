/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:52:26 by yltardif          #+#    #+#             */
/*   Updated: 2019/12/02 17:39:55 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char *str;
	unsigned char j;

	i = 0;
	str = (unsigned char *)s;
	j = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == j)
			return ((void*)str + i);
			i++;
	}
	return (NULL);
}
