/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_str_is_lowercase.c                                  :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 11:52:28 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 12:24:44 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 'a') || (str[counter] > 'z'))
			return (0);
		counter++;
	}
	return (1);
}
