/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:00:16 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/12 18:54:50 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = s;
	while (i < n)
	{
		mem[i] = '\0';
		i++;
	}
}
