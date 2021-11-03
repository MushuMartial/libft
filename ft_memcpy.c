/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:32:41 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/08 20:36:35 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p_dst;
	char		*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	i = 0;
	if (p_dst == NULL && p_src == NULL)
		return (NULL);
	while (n > 0)
	{
		p_dst[i] = p_src[i];
		i++;
		n--;
	}
	return (p_dst);
}
