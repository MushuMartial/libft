/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:45:02 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/13 11:45:59 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = ft_strlen(s);
	ptr = (char *)s;
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
		{
			while (i-- > 0)
				ptr++;
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
