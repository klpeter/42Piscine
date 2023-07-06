/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:25:44 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/06 21:26:45 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while(argv[1][i])
	{
		if(argv[1][i] != argv[1][y])
		{
			argv[1][i] = argv[1][y];
			i++;
		}
		y++;
	}
	i = 0;
	y = 0;
	while(argv[1][i])
	{
		while(argv[2][y])
		{
			if(argv[1][i] == argv[2][y])
			{
				write(1, &argv[1][i], 1);
				break;
			}
			y++;
		}
		y = i;
		i++;
	}
	return (0);
}
