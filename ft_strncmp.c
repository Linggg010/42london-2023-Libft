/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:22:50 by yulin             #+#    #+#             */
/*   Updated: 2023/11/07 20:38:53 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "AABCCb";
	char	s2[] = "AABC";

	printf("%d\n", strncmp(s1, s2, 7));
	printf("%d\n", ft_strncmp(s1, s2, 7));
	return (0);
}
*/
