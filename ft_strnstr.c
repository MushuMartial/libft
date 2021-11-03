/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:05:41 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/08 20:39:25 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;

	ptr = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (ptr);
	while (len > 0 && *ptr)
	{
		if (*ptr == needle[0])
		{
			if (ft_strncmp(ptr, needle, ft_strlen(needle)) == 0
				&& len >= ft_strlen(needle))
			{
				return (ptr);
			}
		}
		len--;
		ptr++;
	}
	return (NULL);
}
