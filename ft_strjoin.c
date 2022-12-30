/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:54:29 by iestero-          #+#    #+#             */
/*   Updated: 2022/10/10 11:14:14 by iestero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	s = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		s[j++] = (char) s1[i++];
	i = 0;
	while (s2[i] != '\0')
		s[j++] = (char) s2[i++];
	s[j] = '\0';
	return (s);
}
