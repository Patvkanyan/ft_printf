/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:03:48 by apatvaka          #+#    #+#             */
/*   Updated: 2025/02/03 17:52:32 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	rec(int n, int *sum)
{
	char	num;

	num = (n % 10) + '0';
	if (n / 10 != 0)
	{
		n /= 10;
		*sum += 1;
		rec(n, sum);
	}
	ft_putchar(num);
}

void	ft_putnbr(int n, int *sum)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*sum += 11;
		return ;
	}
	if (n == 0)
	{
		ft_putchar('0');
		*sum += 1;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		*sum += 1;
		n *= -1;
	}
	rec(n, sum);
}
