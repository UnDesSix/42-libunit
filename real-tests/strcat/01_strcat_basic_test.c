/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcat_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:00:37 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 19:25:12 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcat_basic_test(void)
{
	char	*s1;
	char	*s2;

	s1 = pl_strnew(11);
	s2 = "world";
	s1 = pl_strcpy(s1, "hello");
	s1 = ft_strcat(s1, s2);
	if (pl_strcmp(s1, "helloworld") == 0)
		return (0);
	else
		return (-1);
}
