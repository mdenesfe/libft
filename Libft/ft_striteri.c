/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:11:22 by mdemir            #+#    #+#             */
/*   Updated: 2022/01/06 11:11:23 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void ( *f)(unsigned int, char *))
{
	size_t	l;
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	l = ft_strlen(s);
	while (i < l)
	{
		f (i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
