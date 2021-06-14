/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:04:15 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/24 13:40:23 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long int	num;
	int			len;
	char		*str;

	num = n;
	len = num_len(n);
	if (n < 0)
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (num < 0)
		str[0] = '-';
	if (num < 0)
		num = -num;
	str[len] = '\0';
	if (num == 0)
		str[len - 1] = '0';
	while (num)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}
