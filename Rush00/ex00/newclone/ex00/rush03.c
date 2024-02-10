/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:29 by pstrohal          #+#    #+#             */
/*   Updated: 2023/06/20 13:09:07 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char o);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		if ((x <= 0) || (y <= 0))
			break ;
		while (col <= x)
		{
			if ((col == 1 && row == 1) || (col == 1 && row == y))
				ft_putchar('A');
			else if ((col == x && row == 1) || (col == x && row == y))
				ft_putchar('C');
			else if ((col == 1 || col == x) || (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			++col;
		}
		ft_putchar('\n');
		col = 1;
	++row;
	}
}
