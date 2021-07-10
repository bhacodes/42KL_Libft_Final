/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:54:16 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/04 21:20:40 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	else
	{
		i = ft_strlen(dst);
		while (src[j])
		{
			dst[i + j] = src[j];
			if ((i + j) == dstsize - 1)
				break ;
			j++;
		}
		dst[i + j] = '\0';
	}
	return (d_len + s_len);
}
