/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:26:44 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/10 01:29:52 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(s);
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
