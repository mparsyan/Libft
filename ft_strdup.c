/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:21:56 by mparsyan          #+#    #+#             */
/*   Updated: 2022/04/25 14:31:05 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_cpy(char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char	*ft_strdup(const char *src)
{
	char	*src1;

	src1 = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (src1 != NULL)
		return (str_cpy(src1, src));
	else
		return (src1);
}
