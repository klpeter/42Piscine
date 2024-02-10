/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:51:32 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/02 13:26:36 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	while (0 < nb)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (r);
}
/*
int	main(void)
{
	int	c;

	c = 5;
	printf("%d", ft_iterative_factorial(c));
}
*/