/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:20:01 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/23 17:36:21 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	k;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > (src_len + dst_len))
		k = ft_strlcpy(&dst[dst_len], src, dstsize);
	else
	{
		k = 0;
		while ((k + dst_len) < (dstsize - 1))
		{
			dst[dst_len + k] = src[k];
			k++;
		}
		dst[dst_len + k] = '\0';
	}
	if (dst_len > dstsize)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
