/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_div_mod.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/23 15:00:15 by jmontero              #+#    #+#           */
/* Updated: 2021/06/25 12:10:09 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}