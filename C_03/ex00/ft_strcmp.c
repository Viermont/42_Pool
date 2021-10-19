/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strcmp.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/30 10:40:38 by jmontero              #+#    #+#           */
/* Updated: 2021/06/30 17:30:33 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] != '\0') && (s2[counter] != '\0')
		&& (s1[counter] == s2[counter]))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
