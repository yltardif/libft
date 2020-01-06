/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 18:54:13 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 15:56:32 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*str;

	if (s)
	{
		size = ft_strlen(s);
		if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f(i, (char)(s[i]));
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
