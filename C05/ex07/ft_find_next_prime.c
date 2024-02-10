/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:48:56 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/02 15:30:13 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	n;
	long	lnb;

	lnb = nb;
	if (lnb <= 1)
		return (0);
	n = 2;
	while (n <= (lnb / n))
	{
		if (!(lnb % n))
			return (0);
		else
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	int	number;

	number = 2147483646;
	printf("%d", ft_find_next_prime(number));
}
*/