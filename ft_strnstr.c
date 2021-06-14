/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:07:25 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/15 17:47:20 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int k;
	unsigned int i;

	if (*needle == '\0')
		return ((char*)haystack);
	k = 0;
	i = 1;
	while (haystack[k] != '\0' && (size_t)k < len)
	{
		if (haystack[k] == needle[0])
		{
			while (needle[i] != '\0' && haystack[k + i] == needle[i] &&
					(size_t)(k + i) < len)
				++i;
			if (needle[i] == '\0')
				return ((char*)&haystack[k]);
		}
		++k;
	}
	return (0);
}
