/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 15:18:56 by yltardif          #+#    #+#             */
/*   Updated: 2019/12/09 11:42:50 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int len;
	char j;

	len = ft_strlen(s);
	i = 0;
	j = (char)c;
	while (i <= len)
	{
		if (s[i] == j)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
