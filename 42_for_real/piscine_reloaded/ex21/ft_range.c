/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:47:57 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/10 15:48:14 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	long	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * ((long)max - (long)min));
	if (!tab)
		return (0);
	while ((long)min < (long)max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
