/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_print_reverse_alphabet.c                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/17 12:32:52 by jmontero              #+#    #+#           */
/* Updated: 2021/06/17 14:27:58 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	l;

	l = 'z';
	while (l >= 'a')
	{
		write (1, &l, 1);
		l--;
	}
}
