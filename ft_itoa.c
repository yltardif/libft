/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:34:19 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/06 14:21:11 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	unsigned int nb;
	int len;
	int sign;

	len = 1;
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

// int	main()
// {
// 	char *str;
// 	str = ft_itoa(0);
// 	printf("%s\n", str);
// 	return (0);
// }
