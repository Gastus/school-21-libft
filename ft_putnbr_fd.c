/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:18:14 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/24 13:36:28 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static	void	print_special_nums(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	return ;
}

static	int		num_len(int n)
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

void			ft_putnbr_fd(int n, int fd)
{
	long int	num;
	int			len;
	char		str[10];

	num = n;
	if (!n || n == -2147483648 || n == 2147483647)
	{
		print_special_nums(n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	len = num_len(n);
	str[len] = '\0';
	while (num)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	ft_putstr_fd(str, fd);
}
