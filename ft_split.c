/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:46:16 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/13 13:03:46 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tab_len(char const *s, char c)
{
	size_t	i;
	int		len;

	len = 2;
	i = 0;
	if (c == '\0' && ft_strlen(s) == 0)
		return (1);
	while (s[i] == c)
		i++;
	if (i == ft_strlen(s))
		return (1);
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	return (len);
}

static int	mal_len(char const *s, char c, int pos)
{
	int	len;

	len = 0;
	while (s[pos] == c)
		pos++;
	while (s[pos] != c && s[pos])
	{
		pos++;
		len++;
	}
	return (len);
}

static int	ft_free_all(char **split, int i)
{
	if (split[i] == NULL)
	{
		while (i--)
			free(split[i]);
		free(split);
		return (0);
	}
	else
		return (1);
}

static int	ad_pos(const char *s, int pos, char c)
{
	while (s[pos] == c)
		pos++;
	return (pos);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		pos;
	int		len;

	i = 0;
	pos = 0;
	if (!s)
		return (0);
	split = malloc(sizeof(*split) * tab_len(s, c));
	if (split == NULL)
		return (NULL);
	while (i < (tab_len(s, c) - 1))
	{
		len = mal_len(s, c, pos);
		pos = ad_pos(s, pos, c);
		split[i++] = ft_substr(s, pos, len);
		if (ft_free_all(split, i - 1) == 0)
			return (NULL);
		pos += len;
	}
	split[i] = NULL;
	return (split);
}
