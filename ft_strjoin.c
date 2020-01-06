/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:29:12 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 15:53:26 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(n = malloc(sizeof(*n) * (len + 1))))
		return (NULL);
	while (s1[++i])
		n[i] = s1[i];
	len = 0;
	while (s2[len])
		n[i++] = s2[len++];
	n[i] = '\0';
	return (n);
}
