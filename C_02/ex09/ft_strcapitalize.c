/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_strcapitalize.c                                     :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 13:43:29 by jmontero              #+#    #+#           */
/* Updated: 2021/06/29 18:12:19 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A') && (str[counter] <= 'Z'))
			str[counter] = (str[counter] - 'A' + 'a');
		counter++;
	}
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a') && (str[counter] <= 'z'))
			if ((str[counter - 1] < '0')
				|| ((str[counter - 1] > '9') && (str[counter - 1] < 'A'))
				|| ((str[counter - 1] > 'Z') && (str[counter - 1] < 'a'))
				|| (str[counter - 1] > 'z'))
				str[counter] = (str[counter] - 'a' + 'A');
		counter++;
	}
	return (str);
}
