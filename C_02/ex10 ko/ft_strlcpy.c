/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strlcpy.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 18:18:09 by jmontero              #+#    #+#           */
/* Updated: 2021/06/30 09:48:03 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	destsize;

	destsize = 0;
	counter = 0;
	while ((src[counter] != '\0') && (counter < size))
	{
		dest[counter] = src[counter];
		counter++;
		destsize++;
	}
	dest[counter] = '\0';
	return (destsize);
}
