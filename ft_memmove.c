/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 23:14:32 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 15:49:26 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dest <= source)
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	else
		while (len--)
			dest[len] = source[len];
	return (dst);
}
