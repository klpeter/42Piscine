/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:31:08 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/02 15:11:15 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	n;
	long	lnb;

	lnb = nb;
	if (lnb < 0)
		return (0);
	if (lnb == 0 || lnb == 1)
		return (lnb);
	n = 2;
	while (n * n < lnb && n <= 46340)
		n++;
	if (n * n == lnb)
		return (n);
	return (0);
}
/*
int	main(void)
{
	int	number;

	number = 21473956;
	printf("%d", ft_sqrt(number));
}
*/