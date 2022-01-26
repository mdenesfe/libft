/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:08:00 by mdemir            #+#    #+#             */
/*   Updated: 2022/01/08 07:46:49 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		f;
	int		b;

	if (!s1)
		return (NULL);
	f = 0;
	b = ft_strlen(s1);
	while (s1[f] && ft_strchr(set, s1[f]))
		f++;
	while (b && (b - 1) && ft_strchr(set, s1[b - 1]))
		b--;
	if (!(b - 1))
		b = f;
	r = (char *)malloc(sizeof(*r) * (b - f + 1));
	if (!r)
		return (0);
	r[b - f] = '\0';
	while (b - f)
	{
		r[b - f - 1] = s1[b - 1];
		b--;
	}
	return (r);
}
