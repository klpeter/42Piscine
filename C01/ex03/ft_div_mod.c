/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:43:12 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/24 20:49:54 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0 || b < 0)
	{
		*div = a / b;
		*mod = a % b;
	}	
}
/*
int	main(void)
{
	int	div, mod, n, n1;

	n = 42;
	n1 = 0;

	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d  with remainder %d\n\n", n, n1, div, mod);
}
*/