/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* ft_print_comb2.c                                       :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: jmontero <jmontero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/18 13:34:55 by jmontero              #+#    #+#           */
/* Updated: 2021/06/21 13:18:52 by jmontero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char d);
void	ft_print_comb2(void);
void	ft_bucle(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_bucle(a, b, c, d);
}

void	ft_bucle(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{	
				while (d <= '9')
				{	
					if (!(c <= a && d <= b))
						ft_write(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			b++;
			c = a;
			d = b + 1;
		}
		b = '0';
		a++;
	}
}

void	ft_write(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write (1, ", ", 2);
}
