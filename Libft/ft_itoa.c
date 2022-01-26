/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:24:14 by mdemir            #+#    #+#             */
/*   Updated: 2022/01/08 07:45:06 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	long long	big;
	int			i;

	i = 1;
	big = nbr;
	if (big < 0)
	{
		i++;
		big *= -1;
	}
	while (big > 9)
	{
		big /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	big;
	int			len;
	char		*res;

	len = ft_len(n);
	big = n;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		big *= -1;
	}
	while (big)
	{
		res[--len] = (big % 10) + '0';
		big /= 10;
	}
	return (res);
}
