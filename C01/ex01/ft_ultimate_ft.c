/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:14:48 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/24 20:50:54 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int	n;
	int	*nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7, 
	int	********nbr8, *********nbr9;

	nbr9 = &nbr8;
	nbr8 = &nbr7;
	nbr7 = &nbr6;
	nbr6 = &nbr5;
	nbr5 = &nbr4;
	nbr4 = &nbr3;
	nbr3 = &nbr2;
	nbr2 = &nbr1;
	nbr1 = &n;

	n = 24;
	printf("\nBerfore the function ft_ultimate_ft %d\n", n);
	ft_ultimate_ft(nbr9);
	printf("\nAfter the function ft_ultimate_ft %d\n", n);
}
*/