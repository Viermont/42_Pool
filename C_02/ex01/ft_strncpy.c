/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strncpy.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 13:55:44 by jmontero              #+#    #+#           */
/* Updated: 2021/06/30 09:43:50 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != ('\0') && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
