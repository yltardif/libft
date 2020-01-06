/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:34:19 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 15:42:11 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				len;
	int				sign;

	sign = n < 0 ? 1 : 0;
	nb = n < 0 ? n * -1 : n;
	len = n < 0 ? 2 : 1;
	while (n /= 10)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = 48 + (nb % 10);
		nb = nb / 10;
	}
	if (sign == 1)
		str[--len] = '-';
	return (str);
}
