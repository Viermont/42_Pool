/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_putnbr.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/07/01 11:36:15 by jmontero              #+#    #+#           */
/* Updated: 2021/07/01 18:21:52 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	b;

	if (nb < 0)
	{
		ft_putchar('-');
		b = (nb * -1);
	}
	if (nb >= 0)
		b = nb;
	if (b >= 10)
	{
		ft_putnbr(b / 10);
	}
	ft_putchar((b % 10) + '0');
}
