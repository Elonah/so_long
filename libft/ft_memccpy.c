/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejacquel <ejacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:06:34 by ejacquel          #+#    #+#             */
/*   Updated: 2022/11/09 09:05:30 by ejacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION : La fonction memccpy() copie au plus n octets de la zone
// mémoire src vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre
// le caractère c (converti en unsigned char) QU'ELLE COPIE AUSSI.
// Les deux chaînes ne devraient pas se chevaucher comme le comportement est
// indéfini dans ce cas.

// VALEUR RENVOYEE : La fonction memccpy() renvoie un pointeur sur le caractère
// immédiatement après c dans la zone dest, ou NULL si c n'a pas été trouvé
// dans les n premiers caractères de src mais en copiant quand même les n
// premiers octets.

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		dst++;
		src++;
		i++;
	}
	return (NULL);
}
