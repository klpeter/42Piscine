/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:39:03 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/06 12:05:01 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			else
			write(1, &argv[1][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}