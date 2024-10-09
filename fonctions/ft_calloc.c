/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:47:23 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/06 15:26:41 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t		taille_totale;

	taille_totale = nmemb * size;
	ptr = malloc(taille_totale)
		if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, taille_totale)
	return (ptr);
}
