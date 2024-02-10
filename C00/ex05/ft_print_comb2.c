/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:17:50 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/22 20:44:32 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	c++;
}

void	put_comb(char n[3])
{
	ft_putchar(n[0]);
	ft_putchar(n[2]);
	ft_putchar(n[3]);
	if (n[0] != '7') && (n[1] != '8') && (n[2] != '9')
	{
		ft_putchr(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (1)
	{
		while (++n[2] <= '9')
			put_comb(n);
		if (++n[1] <= '8')
			n[2] = n[1];
		else if (++n[0] <= '7')
		{
			n[1] = n[0] +1;
			n[2] = n[1];
		}
		else
			break ;
	}
}

int	main(void)
{
	ft_print_comb();
}
