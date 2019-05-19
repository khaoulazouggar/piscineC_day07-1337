/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:04:52 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/31 02:22:40 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(int argc, char **argv)
{
	int i;
	int j;
	int f;

	i = 1;
	f = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			f++;
		i++;
	}
	return (f);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;
	int		f;
	int		s;

	f = len(argc, argv);
	tab = malloc(sizeof(char) * (f + (argc - 1)));
	i = 1;
	s = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			tab[s] = argv[i][j];
			s++;
			j++;
		}
		if (i != (argc - 1))
			tab[s++] = '\n';
		i++;
	}
	tab[s++] = '\0';
	return (tab);
}
