/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strncat_buse_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:39:47 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:39:52 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncat_buse_test(void)
{
	char	*s1;
	char	*s2;

	s1 = pl_strnew(10);
	s2 = "hello";
	s2[0] = 'c';
	s1 = ft_strncat(s1, s2, 5);
	if (pl_strcmp(s1, "helloworld") == 0)
		return (0);
	else
		return (-1);
}
