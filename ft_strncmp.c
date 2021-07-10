/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:53:30 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/04 18:19:16 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	res;
	unsigned int	i;

	i = 0;
	res = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			res = (unsigned char)s1[i] - (unsigned char)s2[i];
			break ;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (res);
}
