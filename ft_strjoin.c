/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:05:04 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/24 09:18:01 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s2 = ft_strlen(s2);
	len_s1 = ft_strlen(s1);
	join = (char *)malloc(len_s1 + len_s2 + 1);
	if (join)
	{
		join = ft_memcpy(join, s1, len_s1);
		ft_strlcpy(&join[len_s1], s2, (len_s1 + len_s2 + 1));
		join[len_s1 + len_s2] = '\0';
		return (join);
	}
	else
		return (NULL);
}
