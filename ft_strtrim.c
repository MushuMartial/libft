/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:14:40 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/11 14:21:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t		trim1;
	size_t		trim2;

	if (!s || !set)
		return (0);
	trim1 = 0;
	if (ft_strlen(s) == 0)
		trim2 = 0;
	else
		trim2 = ft_strlen(s) - 1;
	while (ft_strchr(set, s[trim1]) && s[trim1])
		trim1++;
	while (ft_strchr(set, s[trim2]) && trim2 > 0)
		trim2--;
	if (trim1 <= trim2)
		return (ft_substr(s, trim1, trim2 - trim1 + 1));
	else
		return (ft_substr(s, trim1, 1));
}
