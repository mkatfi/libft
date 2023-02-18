/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:22:33 by mkatfi            #+#    #+#             */
/*   Updated: 2022/11/05 14:16:39 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			k;

	str = (char *)s;
	k = (char )c;
	i = 0;
	while (str[i] != k && str[i])
		i++;
	if (str[i] == k)
		return (str + i);
	return (0);
}
