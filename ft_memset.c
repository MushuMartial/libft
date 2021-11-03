/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:16:20 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/13 11:14:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *)b;
	while (len-- > 0)
	{
		ptr[i++] = c;
	}
	return (ptr);
}
