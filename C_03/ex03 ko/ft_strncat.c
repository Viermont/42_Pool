/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strncat.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/30 18:53:35 by jmontero              #+#    #+#           */
/* Updated: 2021/06/30 19:19:49 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				counterA;
	unsigned int	counterB;

	counterA = 0;
	counterB = 0;
	while (dest[counterA] != '\0')
		counterA++;
	while ((src[counterB] != '\0') && (counterB < nb))
	{
		dest[counterA] = src[counterB];
		counterA++;
		counterB++;
	}
	return (dest);
}
