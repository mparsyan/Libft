/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:22:31 by mparsyan          #+#    #+#             */
/*   Updated: 2022/03/19 13:21:55 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		lens;
	char	*joins;

	lens = ft_strlen(s1) + ft_strlen(s2) + 1;
	joins = malloc (sizeof (char) * lens);
	if (!s1 || !s2 || !joins)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joins[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		joins[j++] = s2[i++];
	}
	joins[j] = '\0';
	return (joins);
}
