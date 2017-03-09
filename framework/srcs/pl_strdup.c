/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 13:57:29 by pluu              #+#    #+#             */
/*   Updated: 2017/02/13 13:57:55 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

char	*pl_strdup(const char *s1)
{
	char *str;
	char *tmp;

	str = (char *)malloc(sizeof(*str) * (pl_strlen(s1) + 1));
	if (!str)
		return (0);
	tmp = str;
	while (*s1)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (str);
}
