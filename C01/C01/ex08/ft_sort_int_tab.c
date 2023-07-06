/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:21:28 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/24 20:35:39 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	beg;
	int	end;
	int	temp;

	beg = 0;
	while (beg < size -1)
	{
		end = 0;
		while (end < size - beg - 1)
		{
			if (tab[end] > tab[end + 1])
			{
				temp = tab[end];
				tab[end] = tab[end + 1];
				tab[end + 1] = temp;
			}
			end++;
		}
		beg++;
	}
}
