/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:14:22 by gvillat           #+#    #+#             */
/*   Updated: 2015/12/01 17:14:24 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s1, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		if ((i == 0 && s1[i] != c) ||
				(i != 0 && s1[i] != c && s1[i - 1] == c))
			ret++;
		i++;
	}
	return (ret);
}
