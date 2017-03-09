/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strncpy_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:06:25 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:18:37 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncpy_basic_test(void)
{
	char	buf[6];
	char	*s;

	s = "abc\0\0\0";
 	ft_strncpy(buf, "abc", sizeof(buf));
	if (pl_strcmp(buf, s) == 0)
		return (0);
	else
		return (-1);
}
