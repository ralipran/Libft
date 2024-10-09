/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:58:00 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/06 15:00:23 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2 == NULL || s02[] == '\0')
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && i + j < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
