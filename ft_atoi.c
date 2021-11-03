/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:41:07 by tmartial          #+#    #+#             */
/*   Updated: 2021/10/14 13:08:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	verif_long(const char *str, int i, int signe)
{
	unsigned long long	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i++] - '0');
		if (num > 9223372036854775807 && signe < 0)
			return (0);
		else if (num > 9223372036854775807 && signe > 0)
			return (-1);
	}
	return ((int)(num * signe));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	num;

	signe = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			signe *= -1;
	}
	num = (verif_long(str, i, signe));
	return (num);
}
