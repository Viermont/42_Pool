/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_str_is_alpha.c                                      :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 16:54:57 by jmontero              #+#    #+#           */
/* Updated: 2021/06/28 20:31:18 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 'A') || (str[counter] > 'z')
			|| ((str[counter] > 'Z') && (str[counter] < 'a')))
			return (0);
		counter++;
	}
	return (1);
}
