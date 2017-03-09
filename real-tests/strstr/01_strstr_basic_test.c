/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strstr_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:05:40 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:06:52 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strstr_basic_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "helloworld";
	s2 = "world";
	s3 = ft_strstr(s1, s2);
	if (pl_strcmp(s3, "world") == 0)
		return (0);
	else
		return (-1);
}
