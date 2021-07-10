/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:45:09 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/04 14:08:51 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = dst;
	s = src;
	if (d > s && d - s < (int)len)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	else if (d < s && s - d < (int)len)
	{
		while (len--)
			*d++ = *s++;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
