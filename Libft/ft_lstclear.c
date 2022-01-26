/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:14:54 by mdemir            #+#    #+#             */
/*   Updated: 2022/01/08 15:14:58 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*iter;

	iter = *lst;
	while (iter != NULL)
	{
		temp = iter -> next;
		del(iter -> content);
		free(iter);
		iter = temp;
	}
	*lst = NULL;
}
