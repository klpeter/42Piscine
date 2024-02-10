/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:44:47 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/22 20:16:29 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int n1, int n2, int n3)
{
	ft_putchar (n1);
	ft_putchar (n2);
	ft_putchar (n3);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

n1 = '0';
n2 = '1';
n3 = '3';
	while (n1 < '7')
	{
		while (n2 < '9')
		{
			ft_print(n1, n2, n3);
			n3++;
		}
		n2++;
	}
}
