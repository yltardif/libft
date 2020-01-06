/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yltardif <yltardif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:21:56 by yltardif          #+#    #+#             */
/*   Updated: 2020/01/04 18:24:10 by yltardif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char s[10];
	char *t = NULL;

	printf("s %lu\n", strlcpy(s, "NULL", 6));
	//printf("f %lu\n", ft_strlcpy(t, NULL, 6));
	//printf("s %s\n", s);
	//printf("f %s\n", t);
	return (0);
}
