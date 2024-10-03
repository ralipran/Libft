/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:41:44 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/03 10:03:19 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main()
{
	char	str1[] = "ABP";
	char	str2[] = "ABC";

	printf("La diff en valeur ascii est de : %d\n", ft_strncmp(str1, str2, 20));
}*/
