/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:44:54 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/06 09:57:47 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dst;

	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	p_src = (char *)src;
	p_dst = (char *)dst;
	if (dst > src)
	{
		while (n-- > 0)
			*(p_dst + n) = *(p_src + n);
		return (dst);
	}
	else
	{
		while (n-- > 0)
			*p_dst++ = *p_src++;
	}
	return (dst);
}
