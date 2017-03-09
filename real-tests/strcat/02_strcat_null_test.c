/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcpy_null_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:17:13 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 19:25:20 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcat_null_test(void)
{
	char	*s1;
	char	*s2;

	s1 = NULL;
	s2 = "world";
	s1 = ft_strcat(s1, s2);
	if (pl_strcmp(s1, "helloworld") == 0)
		return (0);
	else
		return (-1);
}
