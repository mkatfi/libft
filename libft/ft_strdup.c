/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:14:28 by mkatfi            #+#    #+#             */
/*   Updated: 2022/11/05 14:16:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;
	int		j;

	j = 0;
	k = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (!k)
		return (NULL);
	while (s1[j])
	{
		k[j] = s1[j];
		j++;
	}
	k[j] = '\0';
	return (k);
}
