/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:06:14 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/06 15:26:21 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1))
		while (i < j)
		{
			str[i] = s[i];
			i++;
		}
	str[i] = '\0',
	return (str);
}
