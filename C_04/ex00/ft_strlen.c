/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strlen.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/07/01 11:09:36 by jmontero              #+#    #+#           */
/* Updated: 2021/07/01 11:18:07 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
