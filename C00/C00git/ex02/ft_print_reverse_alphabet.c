/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:24:39 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/22 17:42:34 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c > '`')
	{
		write (1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	wrtie(1, "\n", 1);
}
