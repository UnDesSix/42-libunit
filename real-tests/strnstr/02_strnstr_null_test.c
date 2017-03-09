/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strnstr_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:15:17 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:15:41 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strnstr_null_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = NULL;
	s2 = "world";
	s3 = ft_strnstr(s1, s2, 6);
	if (pl_strcmp(s3, "world") == 0)
		return (0);
	else
		return (-1);
}
