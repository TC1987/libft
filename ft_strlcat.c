/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 01:12:19 by tcho              #+#    #+#             */
/*   Updated: 2018/11/09 00:20:07 by tcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t dsize;
	size_t ssize;
	size_t max;
	size_t i;
	size_t j;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	max = dstsize - dsize - 1;
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	if (j > dstsize)
		return (ssize + dstsize);
	while (i < max && src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	if (!(dstsize == 0 || (dsize > dstsize)))
		dst[i + j] = '\0';
	return (dsize + ssize);
}
