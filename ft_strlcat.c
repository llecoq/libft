/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llecoq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:24:23 by llecoq            #+#    #+#             */
/*   Updated: 2020/12/09 14:26:38 by llecoq           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!dst && !dstsize)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	if (i < dstsize)
	{
		while (src[j] && (i + 1 < dstsize))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}
