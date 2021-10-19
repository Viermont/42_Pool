/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strlowcase.c                                        :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 13:34:43 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 13:38:09 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A') && (str[counter] <= 'Z'))
			str[counter] = (str[counter] - 'A' + 'a');
		counter++;
	}
	return (str);
}
