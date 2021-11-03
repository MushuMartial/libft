/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 10:33:59 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/13 11:05:05 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr_itoa(unsigned int nb, char *str, int i)
{
	if (nb >= 10)
	{
		i = ft_putnbr_itoa(nb / 10, str, i);
		i = ft_putnbr_itoa(nb % 10, str, i);
	}
	else
	{
		str[i] = (char)(nb + '0');
		i++;
	}
	return (i);
}

static int	mal_len(int c)
{
	int	len;
	int	save;

	save = c;
	len = 0;
	if (save < 0)
	{
		len++;
		save *= -1;
	}
	if (save == 0)
		len++;
	while (save != 0)
	{
		save /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * mal_len(n) + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		i = ft_putnbr_itoa((unsigned int)(n * -1), str, i);
	}
	else
		i = ft_putnbr_itoa((unsigned int)n, str, i);
	str[i] = '\0';
	return (str);
}
