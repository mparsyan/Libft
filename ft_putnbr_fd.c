/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:22:06 by mparsyan          #+#    #+#             */
/*   Updated: 2022/03/19 17:29:20 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putint_fd(int nb, int fd)
{
	const char		sign_symbol = '-';
	char			buffer[10];
	unsigned int	it;

	it = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write (fd, &sign_symbol, 1);
	}
	while (nb)
	{
		buffer[it] = (nb % 10) + 48;
		nb = nb / 10;
		it++;
	}
	while (it)
	{
		it--;
		write (fd, &buffer[it], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	zero_symbol;

	zero_symbol = '0';
	if (n == 0)
	{
		write (fd, &zero_symbol, 1);
	}
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
		ft_putint_fd(n, fd);
}
