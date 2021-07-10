/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:02:16 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/05 20:21:03 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*d;

	d = malloc(sizeof(char) * n + 1);
	if (d == NULL)
		return (NULL);
	d = ft_strncpy(d, s1, n);
	d[n] = '\0';
	return (d);
}
