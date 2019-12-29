/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:19:20 by flogan            #+#    #+#             */
/*   Updated: 2019/09/08 18:00:12 by flogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long n1;

	n1 = n;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 *= -1;
	}
	if (n1 < 10)
		ft_putchar_fd(n1 + '0', fd);
	else
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putchar_fd(n1 % 10 + '0', fd);
	}
}