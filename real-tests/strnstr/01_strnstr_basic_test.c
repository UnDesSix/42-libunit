/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strnstr_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:13:53 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:23:46 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strnstr_basic_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "helloworld";
	s2 = "world";
	s3 = ft_strnstr(s1, s2, 4);
	if (s3 == NULL)
		return (0);
	else
		return (-1);
}
