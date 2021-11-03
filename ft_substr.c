/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:55:57 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/12 13:40:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		res = malloc(sizeof(char) * 1);
	else if (ft_strlen(s) - start < len)
		res = malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (len > j && s[i] != '\0' && start < ft_strlen(s))
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
