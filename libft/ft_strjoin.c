/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:18:15 by mkatfi            #+#    #+#             */
/*   Updated: 2022/11/05 14:16:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*g;

	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1);
	l = ft_strlen(s2);
	g = malloc (sizeof(char) * (k + l) + 1);
	if (!g)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		g[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		g[i++] = s2[j++];
	g[i] = '\0';
	return (g);
}
