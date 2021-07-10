/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 08:45:03 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/06 22:59:08 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		s_len;
	char		*sub;

	i = 0;
	if (s)
	{
		s_len = ft_strlen(s);
		if (start > s_len)
			return (ft_strdup((char *)""));
		if (len > s_len)
			len = s_len + 1 - start;
		if (len > (s_len - start))
			len = s_len - start;
		sub = malloc(sizeof(char) * len + 1);
		if (!sub)
			return (NULL);
		while (s[start] && i < len)
		{
			sub[i++] = s[start++];
		}
		sub[i] = '\0';
		return (sub);
	}
	return (NULL);
}
