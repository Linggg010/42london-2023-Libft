/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 04:09:00 by yulin             #+#    #+#             */
/*   Updated: 2023/11/02 04:17:31 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*cpy;

	cpy = s;
	while (*cpy != '\0')
		cpy++;
	if (*cpy == c)
		return (cpy);
	while (*cpy != *s)
	{
		if (*cpy == c)
			return (cpy);
		cpy--;
	}
	if (*cpy == c)
		return (cpy);
	return (NULL);
}
