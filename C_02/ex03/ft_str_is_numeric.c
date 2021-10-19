/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_str_is_numeric.c                                    :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 20:38:05 by jmontero              #+#    #+#           */
/* Updated: 2021/06/28 20:52:24 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < '0') || (str[counter] > '9'))
			return (0);
		counter++;
	}
	return (1);
}
