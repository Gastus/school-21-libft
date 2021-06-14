/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:30:05 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/26 13:35:22 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	sym;

	str = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*str == sym)
			return (str);
		str++;
	}
	return (NULL);
}
