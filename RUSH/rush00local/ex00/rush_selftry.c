/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_selftry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42Heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:05:06 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/17 16:50:41 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((col == 1 || col == y) && (row == 1 || row == x))
				ft_putchar('o');
			else if (col == 1 || col == y)
				ft_putchar('-');
			else if (row == 1 || row == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			++row;
		}
		ft_putchar('\n');
		++col;
	}
}
