/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_str_is_uppercase.c                                  :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 12:29:48 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 12:38:23 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 'A') || (str[counter] > 'Z'))
			return (0);
		counter++;
	}
	return (1);
}
