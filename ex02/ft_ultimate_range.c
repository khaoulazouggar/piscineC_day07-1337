/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:08:14 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/31 02:20:11 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	str = malloc(sizeof(int) * len);
	while (i < len)
	{
		str[i] = min;
		min++;
		i++;
	}
	*range = str;
	return (i);
}
