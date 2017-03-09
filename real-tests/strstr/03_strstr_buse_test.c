/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strstr_buse_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:08:10 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:09:15 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strstr_buse_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "helloworld";
	s2 = "world";
	s1[0] = 'c';
	s3 = ft_strstr(s1, s2);
	if (pl_strcmp(s2, "world") == 0)
		return (0);
	else
		return (-1);
}
