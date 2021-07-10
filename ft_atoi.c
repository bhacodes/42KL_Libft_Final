/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:52:27 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/05 16:32:18 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_sign(const char *c, int *counter)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (ft_isspace(c[i]))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			result *= -1;
		i++;
	}
	*counter = i;
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	result;

	i = 0;
	neg = get_sign(str, &i);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= neg;
	return (result);
}
