/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:34:09 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/05 20:51:21 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i] != '\0')
	{
	s1[i] = s2[i];
	i++;
	}
	s1[i] = '\0';
	return (s1);
}