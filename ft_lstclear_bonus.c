/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:34:39 by iestero-          #+#    #+#             */
/*   Updated: 2022/10/03 09:45:38 by iestero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux_next;

	if (*lst)
	{
		aux = *lst;
		while (aux)
		{
			aux_next = aux -> next;
			del(aux -> content);
			free(aux);
			aux = aux_next;
		}
		*lst = NULL;
	}	
}
