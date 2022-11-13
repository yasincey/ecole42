/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:13:39 by yceylan           #+#    #+#             */
/*   Updated: 2022/10/23 17:13:41 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (del && lst)
	{
		while (*lst)
		{
			node = *lst;
			*lst = (*lst)->next;
			del(node->content);
			free(node);
		}
	}
}
