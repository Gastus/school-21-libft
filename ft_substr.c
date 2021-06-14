/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:57:59 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/23 19:25:08 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*sub;

	if (!s)
		return (NULL);
	if ((l = ft_strlen(s)) < start)
	{
		sub = malloc(sizeof(char) * 1);
		sub[0] = '\0';
		return (sub);
	}
	if ((l - start) > len)
	{
		sub = malloc(len + 1);
		if (!sub)
			return (NULL);
		sub[len] = '\0';
	}
	else
		sub = malloc(sizeof(char) * ft_strlen(&s[start]));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, &s[start], len);
	return (sub);
}
