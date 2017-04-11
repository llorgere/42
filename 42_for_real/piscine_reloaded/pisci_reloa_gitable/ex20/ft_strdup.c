/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:40:00 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/10 15:41:54 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*moc;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	moc = (char*)malloc(sizeof(*moc) * (i));
	if (!moc)
		return (0);
	while (j < i)
	{
		moc[j] = src[j];
		j++;
	}
	moc[j] = '\0';
	return (moc);
}
