/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:31:31 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/06 22:01:34 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	if (c == '\0')
		return (&buf[ft_strlen(s)]);
	while (buf[i])
	{
		if (buf[i] == (unsigned char)c)
			return (&buf[i]);
		i++;
	}
	return (NULL);
}
