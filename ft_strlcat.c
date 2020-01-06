/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:36:40 by yltardif          #+#    #+#             */
/*   Updated: 2019/12/02 18:43:10 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((i + j) < dstsize - 1 && dstsize > 0 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j != 0)
		dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (dstsize < i)
		return (dstsize + j);
	return (i + j);
}
