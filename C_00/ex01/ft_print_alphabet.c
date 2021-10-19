/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_print_alphabet.c                                    :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/16 20:26:47 by jmontero              #+#    #+#           */
/* Updated: 2021/06/17 10:43:46 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a';
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}
