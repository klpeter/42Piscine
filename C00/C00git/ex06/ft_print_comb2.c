/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:52:19 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/22 17:43:28 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(short no)
{
	char	c;

	if (no < 10)
	{
		c = no + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (no / 10) + 48;
	write(1, &c, 1);
	c = no % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	n[2];

	n[0] = 0;
	while (n[0] < 99)
	{
		n[1] = n[0] + 1;
		while (n[1] < 100)
		{
			write_number(n[0]);
			write(1, " ", 1);
			write_number(n[1]);
			if (n[0] == 98 && n[1] == 99)
				write(1, "\n", 2);
			else
				write(1, ". ", 2);
				n[1]++;
		}
		n[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/