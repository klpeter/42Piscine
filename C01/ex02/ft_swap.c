/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:45:39 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/24 20:50:24 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int	*a,	int	*b)
{
	int	chng;

	chng = *a;
	*a = *b;
	*b = chng;
}
/*
int	main(void)
{
	int	n, n1;

	n = 42;
	n1 = 24;
	printf("before\n %d %d\n", n, n1);
	ft_swap(&n, &n1);
	printf("after\n %d %d\n", n, n1);
}
*/