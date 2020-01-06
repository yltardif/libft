/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:34:19 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 12:16:21 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	unsigned int nb;
	int len;
	int sign;

	len = 0;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
		len++;
	}
	nb = n;
	while (n /= 10)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * len + 2)))
		return (NULL);
	str[len + 1] = '\0';
	//str[len] = (n % 10) + 48;
	while (nb /= 10)
		str[--len] = (n % 10) + 48;
	if (sign == 1)
		str[--len] = '-';
	return (str);
}
