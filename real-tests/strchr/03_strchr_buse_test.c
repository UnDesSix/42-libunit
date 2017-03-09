/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strchr_buse_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:25:35 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:25:42 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strchr_buse_test(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello";;
	s1[0] = 'c';
	s2 = ft_strchr(s1, 'o');
	if (pl_strcmp(s2, "o") == 0)
		return (0);
	else
		return (-1);
}