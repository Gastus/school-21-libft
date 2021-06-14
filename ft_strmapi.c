/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:49:00 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/23 16:26:09 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;

	if (!s || !f)
		return (NULL);
	mapi = (char *)malloc((ft_strlen(s) + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = s[i];
		i++;
	}
	mapi[i] = '\0';
	i = 0;
	while (mapi[i])
	{
		mapi[i] = f(i, mapi[i]);
		i++;
	}
	return (mapi);
}
