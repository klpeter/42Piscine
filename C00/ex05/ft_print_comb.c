/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:42:33 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/27 01:15:33 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(char n[])
{
	if (n[0] == '7' && n[1] == '8' && n[2] == '9')
	{
		write(1, n, 3);
		write(1, "\n", 2);
	}
	else
		write(1, n, 5);
}

void	ft_print_comb(void)
{
	char	n[5];

	n[0] = '0';
	n[3] = ',';
	n[4] = ' ';
	while (n[0] <= '7')
	{
		n[1] = n[0] +1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				write_numner(n);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
