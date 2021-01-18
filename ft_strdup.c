/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:12:21 by alesanto          #+#    #+#             */
/*   Updated: 2020/01/27 14:57:03 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!src)
	{
		dest = ft_strdup("(null)");
		return (dest);
	}
	if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	while (src && *src)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
