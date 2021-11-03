/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:55:42 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/13 11:50:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	dstsize = dstsize - i - 1;
	while (dstsize > 0 && *src)
	{
		dst[i++] = *src;
		src++;
		dstsize--;
	}
	dst[i] = '\0';
	if (dstsize == 0)
		return (ft_strlen(dst) + ft_strlen(src));
	return (i);
}
