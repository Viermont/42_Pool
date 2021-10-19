/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strupcase.c                                         :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 13:01:30 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 13:28:58 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a') && (str[counter] <= 'z'))
			str[counter] = (str[counter] - 'a' + 'A');
		counter++;
	}
	return (str);
}
