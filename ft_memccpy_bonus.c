/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:32:02 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/02 14:07:33 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;

	i = 0;
	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	while (i < n)
	{
		dt[i] = sc[i];
		if (dt[i] == (unsigned char)c)
			return (&dt[i] + 1);
		i++;
	}
	return (NULL);
}
