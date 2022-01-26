/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:00:09 by mdemir            #+#    #+#             */
/*   Updated: 2022/01/08 15:18:11 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*en;
	unsigned char	*by;

	en = (unsigned char *)dst;
	by = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
		*(en++) = *(by++);
	return (dst);
}
