/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:33:50 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/05 18:13:53 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(const char *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int len;
	int size;
	char *str;
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_is_in(set, s1[i]) == 1)
		i++;
	while ((len - 1) >= 0 && ft_is_in(set, s1[len - 1]) == 1)
		len--;
	size = (i > len) ? 0 : len - i;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
