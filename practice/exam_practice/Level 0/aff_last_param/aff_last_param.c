/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:32:31 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/05 15:45:16 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		while(argv[argc - 1][i])
		{
		write(1, &argv[argc - 1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
}