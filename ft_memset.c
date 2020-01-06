/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:37:58 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/05 20:04:30 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t i;
	unsigned char *tmp;

	i = 0;
	tmp = (unsigned char *)pointer;
	while (i < count)
	{
		tmp[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
