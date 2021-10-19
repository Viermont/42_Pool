/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_print_numbers.c                                     :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/17 15:48:05 by jmontero              #+#    #+#           */
/* Updated: 2021/06/17 16:12:38 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers (void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}
