/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 15:42:54 by yltardif          #+#    #+#             */
/*   Updated: 2019/12/02 17:54:49 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (i-- > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char*)(s + i));
	}
	return (NULL);
}
