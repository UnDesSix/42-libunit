/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strchr_null_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:22:09 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:23:53 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strchr_null_test(void)
{
	char	*s1;
	char	*s2;

	s1 = NULL;
	s2 = ft_strchr(s1, 'z');
	if (pl_strcmp(s2, "z") == 0)
		return (0);
	else
		return (-1);
}
