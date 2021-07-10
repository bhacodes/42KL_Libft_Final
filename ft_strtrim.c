/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:17:25 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/06 23:34:37 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s2;
	size_t		s1_size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_size = ft_strlen(s1);
	while (s1_size && ft_strchr(set, s1[s1_size]))
		s1_size--;
	s2 = ft_substr((char *)s1, 0, s1_size + 1);
	return (s2);
}
