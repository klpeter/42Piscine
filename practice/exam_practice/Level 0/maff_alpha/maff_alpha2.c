/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:53:17 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/05 17:32:24 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	e;
	char	u;

	e = 'B';
	u = 'a';

	while (u <= 'z' || e <= 'Z')
	{
		if(u % 2 != 0)
		{
			write(1, &u, 1);
		}
		u++;
		if(e % 2 == 0)
		{
			write(1, &e, 1);
		}
		e++;
	}
}
