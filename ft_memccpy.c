/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:40:11 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/15 16:59:44 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dst;
	unsigned char		symb;
	size_t				i;

	tmp_src = (const unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	i = 0;
	symb = (unsigned char)c;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		if (tmp_dst[i] == symb)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
