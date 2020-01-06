/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:24:50 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/04 15:49:44 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char		*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*n;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		if (!(n = malloc(sizeof(*n) * 1)))
			return(NULL);
		n[0] = '\0';
		return (n);
	}
	if (!(n = malloc(sizeof(*n) * (len + 1))))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		n[i] = s[start];
		i++;
		start++;
	}
	n[i] = '\0';
	return (n);
}
