/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_str_is_printable.c                                  :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 12:41:45 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 12:57:59 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 32) || (str[counter] > 126))
			return (0);
		counter++;
	}
	return (1);
}
