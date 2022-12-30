/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:26:23 by iestero-          #+#    #+#             */
/*   Updated: 2022/09/21 16:41:55 by iestero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	dup = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dup[i] = (char) s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
