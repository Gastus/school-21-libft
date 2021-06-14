/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:23:10 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/17 21:22:28 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
		return (dst);
	}
	while (len)
	{
		tmp_dst[len - 1] = tmp_src[len - 1];
		len--;
	}
	return (dst);
}
