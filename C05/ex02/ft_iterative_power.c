/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:11:24 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/02 13:24:57 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	if ((power == 0) || (nb < 0 && power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			r = nb * r;
			power --;
		}
		return (r);
	}
}
/*
int	main(void)
{
	int	n;
	int	p;

	n = 5;
	p = 3;
	printf("%d", ft_iterative_power(n, p));
}
*/