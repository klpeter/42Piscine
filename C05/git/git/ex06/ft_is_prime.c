/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:45:15 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/02 13:18:20 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	n = 2;
	while (nb % n != 0)
	{
		n++;
	}
	if (n == nb)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	number;

	number = 4;
	printf("%d", ft_is_prime(number));
}
*/