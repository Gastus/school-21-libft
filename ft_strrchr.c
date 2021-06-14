/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:02:46 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/17 21:16:40 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*buf;

	i = 0;
	buf = (char *)s;
	len = ft_strlen(buf);
	if (c == '\0')
		return (&buf[len]);
	while (len >= 0)
	{
		if (buf[len] == (unsigned char)c)
			return (&buf[len]);
		len--;
	}
	return (NULL);
}
