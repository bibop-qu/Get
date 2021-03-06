/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basle-qu <basle-qu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:10:49 by basle-qu          #+#    #+#             */
/*   Updated: 2015/01/02 15:13:19 by basle-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		*ft_memalloc(size_t size)
{
	size_t		i;
	void		*new;

	i = 0;
	new = malloc(size);
	if (!new)
		return (0);
	while (i < size)
	{
		((char*)new)[i] = 0;
		i++;
	}
	return (new);
}

char			*ft_strnew(size_t size)
{
	char	*new;

	new = (char*)ft_memalloc(size + 1);
	return (new);
}
