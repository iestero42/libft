/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:22:04 by iestero-          #+#    #+#             */
/*   Updated: 2022/09/19 13:17:59 by iestero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	s;
	char			*str;
	size_t			i;

	s = (unsigned char) c;
	i = 0;
	str = (char *) b;
	while (i < len)
		str[i++] = s;
	b = (void *) str;
	return (b);
}
