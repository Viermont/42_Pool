/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_rev_int_tab.c                                       :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/23 19:41:05 by jmontero              #+#    #+#           */
/* Updated: 2021/06/25 12:24:46 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	v;
	int	z;

	z = size - 1;
	v = 0;
	while (v < (size / 2))
	{
		aux = tab[v];
		tab[v] = tab[z];
		tab[z] = aux;
		v++;
		z--;
	}
}
