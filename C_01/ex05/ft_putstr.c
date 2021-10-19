/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_putstr.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/23 16:19:27 by jmontero              #+#    #+#           */
/* Updated: 2021/06/23 18:45:26 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
	{
		write(1, &str[v], 1);
		v++;
	}
}
