/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:10:36 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/09 17:57:02 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s1);
	j = 0;
	str = 0;
	if (s1 && set)
	{
		while (s1[j] && ft_strchr(set, s1[j]))
		j++;
		while (s1[i - 1] && ft_strchr(set, s1[i - 1]) && i > j)
		i--;
		str = (char *)malloc(sizeof(char) * (i - j + 1));
		if (str)
			ft_strlcpy(str, &s1[j], i - j + 1);
	}
	return (str);
}