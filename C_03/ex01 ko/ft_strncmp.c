/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strncmp.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/30 16:41:00 by jmontero              #+#    #+#           */
/* Updated: 2021/07/01 13:58:42 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] != '\0') && (s2[counter] != '\0') && (counter < n))
	{
		if (s1[counter] == s2[counter])
			return (0);
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
