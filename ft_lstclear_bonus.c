/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:41:45 by mezhang           #+#    #+#             */
/*   Updated: 2025/07/07 22:01:37 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	ptr = *lst;
	while (ptr != NULL)
	{
		del(ptr->content);
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*lst = NULL;
}

/* void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;
	int		i;

	i = ft_lstsize(*lst);
	ptr = *lst;
	while (i - 1 > 0)
	{
		del(ptr->content);
		temp = ptr->next;
		free(ptr);
		ptr = temp;
		i--;
	}
	*lst = NULL;
} */
