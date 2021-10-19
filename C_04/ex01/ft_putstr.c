/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_putstr.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/07/01 11:23:16 by jmontero              #+#    #+#           */
/* Updated: 2021/07/01 11:33:34 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
}
