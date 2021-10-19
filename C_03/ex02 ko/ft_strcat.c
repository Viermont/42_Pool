/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strcat.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/30 18:05:02 by jmontero              #+#    #+#           */
/* Updated: 2021/06/30 18:22:20 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counterA;
	int	counterB;

	counterA = 0;
	counterB = 0;
	while (dest[counterA] != '\0')
		counterA++;
	while (src[counterB] != '\0')
	{
		dest[counterA] = src[counterB];
		counterA++;
		counterB++;
	}
	return (dest);
}
